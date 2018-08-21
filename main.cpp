#include <iostream>
#include "bitUtils.h"


int main() {

    std::cout << "Bits operations" << std::endl;

    int i = 0;
    std::cout << "(input): ";
    std::cin >> i;
    std::cout << "number of bits set " << countBits(i) << std::endl;
    printBits(i);
    multiplyByTwo(i);
    dividedByTwo(i);
    inspectBits(i) ? std::cout << "consecutive bits found" << std::endl : std::cout << "no consecutive bits found" << std::endl;
    setOneBit(i, 32);
    unsetOneBit(i,32);
    toogleBit(i,1);

    return 0;
}