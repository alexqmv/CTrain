/*

        Made by @alex.qmv
        Instagram: @alex.qmv
        Twitter: @lexccode

        !!!    NON LICENSE    !!!
        IT'S AN OPEN-SOURCE(OS) CODE
        ANYONE IS ABLE TO USE THIS CODE.

        Thanks for Support!

        Theme: "crypto"

*/

#include <iostream>

using namespace std;


void converter() 
{
    int bitcoin,ethereum,solana,entering;
    bitcoin = 32000;
    ethereum = 2000;
    solana = 50;

    cout << "Enter currency [BITCOIN, ETHEREUM, SOLANA] -> ";
    cin >> entering;

    if (entering <= bitcoin) 
    {
        cout << "Ethereum [ETH] PRICE ->" << ethereum;
    }else if (entering == bitcoin)
    {
        cout << "BITCOIN [BTC] HOT PRICE IS ->" << bitcoin;
    }else if (entering < ethereum)
    {
        cout << "SOLANA [SOL] HOT PRICE IS -> " << solana;
    }



}

 
int main () {
    
     
    converter();

    return 0;
}
