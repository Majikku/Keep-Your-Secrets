
#include <iostream>
#include <string>

// Base prime "p"
// Secret key "k"
// Public seed "g"
int createPublicKey(int p, int sk, int g){
    return ((g^sk)%p);
};

// Public key "pk"
// Secret key "sk"
// Base prime "p"
int createEncryptedKey(int pk, int sk, int p){
    return ((pk^sk)%p);
};

// encryptMessage();
//      Plain message
//      Encrypted key
//      Base prime


//Plain message "msg"
// Encrypted key "ek"
// Base prime "p"
std::string encryptMessage(std::string msg, int ek, int p){
    std::string intStr;
    for(int i = 0; i<=msg.length(); i++){
        int intChar = int(msg[i]);
        intStr.append("b");
        //std::cout << intStr << "\n";
    };
    return intStr;
};

// decryptMessage();
//      Encrypted message
//      EncryptedKey
//      Base prime


// !!--NEED TO IMPORVE UPON--!!
// Pubic seed "g"
// Base prime "p"
// Public key "pk"
int breakKey(int g, int p, int pk){
    int a = 1;
    while (((g^a)%p) != pk){
        a++;
    }
    return a;
};

int main() {
    //int sum = breakKey(9,7,4);
    //std::cout << sum << "\n";

    //std::string tst = encryptMessage("a",1,1);
    //std::cout << tst << "\n";
    std::string tst = "something";
    int test = 123;
    tst += std::to_string(123);
    std::cout << tst << "\n";
    
    return 0;
};