#include <iostream>
#include <windows.h>
#include "CLT.h"

int main() {
    std::cout << "Not Encrypted String" << std::endl;
    std::cout << CLT("Encrypted String!") << std::endl;
    
    return 0;
}

//Credits to https://github.com/skadro-official/skCrypter and https://github.com/llxiaoyuan/oxorany and https://github.com/openluopworld/aes_128/
