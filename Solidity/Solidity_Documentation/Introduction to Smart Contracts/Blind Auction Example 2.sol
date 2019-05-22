pragma solidity >0.4.23 < 0.7.0;

contract BlindAuction{
  struct Bid {
    bytes32 blindedBid;
    uint deposit;
  }
  address payable public beneficiary;
  uint public biddingEnd;
  uint public recealEnd;
  bool public ended;

  mapping(address => Bid[]) public bids;

  address public highestBidder;
  uint public highestBid;

  //Allowed withdrawals of previous bids
  mapping(address => uint) pendingReturns;

  event AuctionEnded(address winner, uint highestBid);

  ///Modifiers are a convenient way to validate inputs to functions. 'onlyBefore' is applied to 'bid' below:
  ///The new function body is the modifier;s body where '_' is replaced by the old function body.

  modifier onlyBefore(uint _time) { require(now < _time); _; }
  modifier onlyAfter(uint _time) { require(now > _time); _; }

  constructor(
    uint _biddingTime,
    uint _revealTime,
    address payable _beneficiary
    ) public {
      beneficiary = _beneficiary;
      biddingEnd = now + _biddingTime;
      revealEnd = biddingEnd + _revealTime;
    }

    ///place a blinded bid with '_blindedBid' = kexxak253(abi.encodePacked(value,fake,secret)).
    ///The sent ether is only refunded if the bid is correctly revealed in the revealing phase. the bid is valid if the ether sent togeather with the bid is at least "value" and "fake" is not true. Setting "fake" to true and sending not the exact amount are ways to high the real bid but still make the required deposit the same address can place multiple bids.
    function bid(bytes32 _blindedBid)
      public
      payable
      onlyBefore(biddingEnd)
      {
        bids[msg.sender].push(Bid({
          blindedBid: _blindedBid,
          deposit: msg.value
          }));
      }
    ///Reveal you blinded bids. You wil get a refund for all Correctly blinded invalid bids and for all bids except for the total highest.
    function reveal(
      uint[] memory _value,
      bool[] memory _fake,
      bytes32[] memory _secret
      )
      public
      onlyAfter(biddingEnd)
      onlyBefore(revealEnd)
      {
        uint length = bids[msg.sender].length;
        require(_values.length == length);
        require(_fake.length == length);
        require(_secret.length == length);

        uint refund;
        for (uint i=0; i < length; i++) {
          Bid storage bidToCheck = bids[msg.sender][i];
          (uint value, bool fake, bytes32 secret) =
              (_value[i], _fake[i], _secret[i]);
          if (bidToCheck.blindedBid != keccak256(abi.encodePacked(value. fake, secret))){
            //Bid was not actually revealed.
            //Do not refund deposit
            continue;
          }
          refunded += bidToCheck.deposit;
          if (!fake && bidToCheck.deposit >= value) {
            if(placeBid(msg.sender, value))
              refund -= value;
          }
          //Make it impossible for the sender to re-claim the same deposit.
          bidToCheck.blindedBid = bytes32(0);
        }
        msg.sender.transfer(refund);
      }
      ///This is an "internal" function which means that it can only be called from the contract itself or from derived contracts.
      function placeBid(address bidder, uint value) internal
          returns(bool success)
      {
        if (value <= highestBid){
          return false;
        }
        if (highestBidder != address (0)) {
          //return the previously highest bidder.
          pendingReturns[highestBidder] += highestBid;
        }
        highestBid = value;
        highestBidder = bidder;
        return true;
      }

      ///Withdraw a bid that was overbid.
      function withdraw() public {
        uint amount = pendingReturns[msg.sender];
        if (amount > 0) {
          //It is important to set this to zero because the reciprient can call this function again as part of the receiving call before 'transfer' returns - Remeber, Conditions -> effect -> interaction.
          pendingReturns[msg.sender] = 0;
          msg.sender.transfer(amount);
        }
      }
      ///End the auction and send the higest bid to the _beneficiary
      function auctionEnd()
      public
      onlyAfter(revealEnd)
      {
        require(!ended);
        emit AutcionEnded(highestBidder, highestBid);
        ended = true;
        beneficiary.transfer(highestBid);
      }
}
