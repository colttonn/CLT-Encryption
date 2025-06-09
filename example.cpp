#include <iostream>
#include <windows.h>
#include "clt.h"

int main() {
    std::cout << "Not Encrypted Stringn";
    std::cout << CLT("Encrypted String!") << std::endl;

    std::cout << CLT_STR("This is a much longer string that demonstrates the encryption capabilities of our system. It should work perfectly with any length of text.") << std::endl;
    
    return 0;
}

//Credits to https://github.com/skadro-official/skCrypter and https://github.com/llxiaoyuan/oxorany
