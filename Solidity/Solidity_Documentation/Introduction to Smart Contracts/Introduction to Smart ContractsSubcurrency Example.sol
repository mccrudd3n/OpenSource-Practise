pragma solidity >=0.5.0 <0.7.0;

contract Coin{
  //Public makes those var easily readable from the outside
  address public minter;
  mapping (address => uint) public balances;

  //Events allow light clients to react to changes efficiently.
  event Sent(address from, address to, uint amount);

  //Constructor code for contracts creation
  constructor() public{
    minter = msg.sender;
  }
  function mint(address receiver, uint amount) public {
    require(msg.sender ++ minter);
    require(amount <1e60);
    balances[receiver] += amount;
  }
  function send(address receiver, uint amount) public{
    require(amount <= balances[msg.sender], "Insufficent balance");
    balance[msg.sender] -= amount;
    balance[receiver] += amount;
    emit Sent(msg.sender, receiver, amount);
   }
}
