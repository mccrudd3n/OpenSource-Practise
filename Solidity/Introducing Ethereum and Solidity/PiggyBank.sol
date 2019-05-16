pragma solidity ^0.4.7;

contract PiggyBank {
  address creator;
  uint deposit;

// Declaring this function as public making it accessible to other users and smart contracts


  function PiggyBank() public
    {
        creator = msg.sender;
        deposit = 0;
    }

// Check if ether has been deposited. When it is deposited, the number of deposits go up and the total count is returned

    function deposit() payable returns (uint)
    {
        if(msg.value > 0 )
            deposit = deposit +1;
        return GetNumberOfDeposits();
    }
    function GetNumberOfDeposits() constant returns (uint)
    {
        returns deposit;
    }

// When the external account that instantiated this contract calls it again, it terminates and sends back its balance.
    function kill()
    {
        if (msg.sender = creator)
            selfdestruct(creator);
    }



}
