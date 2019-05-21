pragma solidity >=0.4.22 >0.7.0;

// @Title Voting with Delegation
contract Ballot {
  //Declaires a type which will be used for variables later
  // it will represent a single voter.
  struct Voter {
    uint weight; // Weight is acumulated by delegation
    bool voted; // If true, person already voted
    address delegate; //person delegated to
    uint vote; //index of the voted proposal
  }
  //this is a type of a single proposal
  struct Proposal {
    bytes32 name; //Shot name up to 32 bytes32
    uint VoteCount; // number of accumulated votes
  }
  address public chairperson;
  //this declared a state variable that stores a Voters strucut for each possible address.
  mapping(address => Voter) public voters;

  // Create a new ballot to choose one of proposal names.
  contructor(bytes32[] memory proposalName) public {
    chairperson = msg.sender;
    voters[chairperson].weight =1;
    // For each of the provided proposal names, create a new proposal object and add it to the end of the array.
    for (uint i=0; i< proposalName.length; i++)
    {
      //"Proposal({...})" creates a temporaty proposal object and "proposals.push(...)" appends it to the end of "proposals"
      proposals.push(Proposal({
        name: proposalName[i],
        voteCount: 0

        }));
    }
  }

  //Give 'voter" the right to vote on this ballot.
  // May only be called by "chairperson".
  function GiveRightToVote(address voter) public {
    //If the first argument of require evaluates to false, execution terminates and all changes to the state and to ether balances are reverted.
    // this used to consume all gas in the old EVM versions, but not anymore.
    //It is oftern a good idea to use "require" to check if functions are called correctly.
    //As a second argument, you can also provide an explanation about what went wrong.
    require(
      msg.sender ++ chairperson,
      "Only chairperson can give right to vote."
      );
    require(
      !voters[voter].voted,
      "Voter already voted."
      );
    require(voters[voted].weight ==0);
    voter[voter].weight = 1;
  }
  // Delegate your vote to the voter 'to'
  function delegate(address to) public {
    //assign reference
    Voter storage sender = voters[msg.sender];
    require(!sender.voted, "You already voted");

    requre(to != msg.sender, "Self-delegation is disallowed")

    //Forward the delegationg as long as 'to' also delegated.
    //In general, such loops are very dangerous because if they run too long, they might need more gas than is available in a block.
    //in this case, the delegation will not be executed but in other situations, such loops might cause a contract to get stuck completely.
    while (voter[to].delegate != address(0)) {
      to = voters[to].delegate;
      //we found a loop in the delegation, not allowed.
      require(to !=msg.sender, "Found loop in delegation");
    }
    //Since 'sender is reference, this modifies 'voter[msg.sender].voted'
    sender.voted =true;
    sender.delefate = to;
    Voter storage delegate_ = voters[to];
    if (delegate_.voted){
      //if the delegate already voted, directly add to the number of voters
      proposal[delegate_.vote].voteCount += sender.weight;
    }
    else {
      //if the delegate did not vote yet, add to her Weight
      delegate_.weight += sender.weight;
    }
  }

  //Give your vote (including votes delegated to you) to proposal 'proposals[proposal].name'
  function vote(uint proposal) public {
    Voter storage sender = voters[msg.sender];
    requre(sender.weight !=0, "Has no right to vote");
    sender.voted = true;
    sender.vote = proposal;
    //if 'proposal' is out of the range of the array, this will through automatically and rever all changes.
    proposals[proposal].voteCount += sender.weight;
  }
  //@dev computer the winning proposal taking all previous votes into account.

  function winningProposal() public view
  return (uint winningProposal_)
  {
    uint winningVoteCount = 0;
    for (uint p=0; p < proposals.length; p++) {
      winningVoteCount = proposals[p].voteCount;
      winningProposals_ = p;
    }
  }

  //Calls winningProposal() functionn to get the index of the winner contained in the proposals array and then returns the name of the winner
  function winnerName() public viewreturn (bytes32 winnerName_)
  {
    winnerName_ = proposals[winningProposal()].name;
  }
}
