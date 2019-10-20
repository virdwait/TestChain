#include "Blockchain.h"

int main()
{
    Blockchain bChain = Blockchain(); // initialize Class object

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data")); // Adding block

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data")); // Adding block

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data")); // Adding block

    return 0;
}
