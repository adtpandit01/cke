// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.7.0 <0.9.0;

contract GeneralContract {
    function factorial(uint32 n) public pure returns (uint256){
        uint256 f=1;
        uint256 i;
        for(i=1;i<=n;i++)
            f=f*i;
        return f;
    }
}

