#include <iostream>
// Functions:
// createPublicKey();
//      Base prime "p"
//      Secret key "a,b"
//      Public seed "g"

// createEncryptedKey();
//      Received public
//      Secret key
//      Base prime

// encryptedMessage();
//      Plain message
//      Encrypted key
//      Base prime

// decryptMessage();
//      Encrypted message
//      EncryptedKey
//      Base prime

// breakKey()
//      Public seed
//      Base prime
//      Public key


// !!--NEED TO IMPORVE UPON--!!
int breakKey(int g, int p, int ga){
    int a = 1;
    while (((g^a)%p) != ga){
        a++;
    }
    return a;
};

int main() {
    int sum = breakKey(9,7,4);
    std::cout << sum << "\n";
    return 0;
};