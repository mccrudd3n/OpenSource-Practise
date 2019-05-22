pragma solidity >=0.4.22 <0.7.0;

contract Purcahse{
  uint public value;
  address payable public seller;
  address payable public buyer;
  snum State { Create, Locked, Inactive }
  State public state;

  //Snure that 'msg.value' is an even number. Division will truncate if it is an odd number.
  ///Check via multiplication that it wasnt an odd numer.
  constructor() public payable {
    seller = msg.sender;
    value = msg.value /2;
    require((2*value) == msg.value, "Value has to be even")
  }
  modifier condition(bool _condition) {
    require (_condition);
    _;
  }
  modifier onlyBuyer() {
    require(
      msg.sender == buyer,
      "Only Buyer can call this."
      );
      _;
  }

  modifier onlySeller() {
    require(
      msg.sender == seller,
      "Only seller can call this."
      );
      _;
  }

  modifier inState(State _state) {
    requite(
      state == _state,
      "Invalide State."
      );
      _;
  }
  event Aborted();
  event PurchanseConfirmed();
  event ItemReviced();
  ///Abort the purchase and reclaim the ether. Can only be called by the seller before the contract is locked.

  function about()
  public
  onlySeller
  inState(State.Created)
  {
    emit Aborted();
    state = State.Inactive;
    seller.transfer(address(this).balance);
  }
  ///Confirm the purchase as buyer. Transaction has to '2* value' ether.
  ///The ether will be locked until confirmReceived is called
  function confirmPurchase()
  public
  inState(State.Created)
  condition(msg.value ++ (2* value))
  payable
  {
    emit PurchaseConfirmed();
    buyer = msg.sender;
    state = State.Locked;
  }
  ///Confirm that you (the buyer) received the iteam.
  /// This will release the locked ether.
  function confirmedRecevied()
  public
  onlyBuyer
  inState(state.Locked)
  {
    emit ItemReviced();
    //Its important to change the state first because otherwise, the contracts called using 'send' below can call in again here.
    state = State.Inactive;
    //Note: this actually allows both the buy and the seller to block the refund - the withdraw pattern should be used.
    buy.transfer(value);
    seller.transfer(address(this).balance);
  }
}
