//
// Created by alonso on 8/21/18.
//

#ifndef BITS_BITUTILS_H
#define BITS_BITUTILS_H

#include <iostream>

/*
 * @brief printBits is a function that given a 32bit positive number,
 * it prints the binary representation of the number.
 *
 * */
void printBits(unsigned int n) {
    for (int i = (sizeof(int)*8) - 1; i >= 0; i--)
        (n & (1u << i)) ? putchar('1') : putchar('0');
    std::cout << std::endl;
}

/*
 * @brief countBits is a function that given a 32bit positive number,
 * it returns the number of bites that are set to 1.
 * */
int countBits(unsigned int n){
    int sum  = 0;
    for (int i = 0; i < (sizeof(int) * 8); i++)
        if (n &(1u << i))
            sum++;
    return sum;
}

/*
 * @brief inspectBits is a function that given a 32bit positive number,
 * it checks if the given number contains two or more consecutives bits set
 * in its binary representation, if it does the function return 1, otherwise
 * is return 0.
 * */
int inspectBits(unsigned int n){
    for (int i = 0; i < (sizeof(int) * 8); i++)
        if ( (n &(1u << i)) && (n &(1u << i+1)) )
            return 1;
    return 0;
}

/*
 * @brief multiplyByTwo is a function that takes a 32bit positive number,
 * it use a left-shift operator that is equivalent to multiply the number by 2.
 * */
void multiplyByTwo(unsigned int n){
    std::cout << n <<  "*2 = " << (n<<1) << std::endl;
}

/*
 * @brief dividedByTwo is a function that takes a 32bit positive number,
 * it use a right-shift operator that is equivalent to divide the number by 2.
 * */
void dividedByTwo(unsigned int n){
    std::cout << n << "/2 = " << (n>>1) << std::endl;
}

/*
 * @brief dividedByTwo is a function that takes a 32bit positive number,
 * it use a right-shift operator that is equivalent to divide the number by 2.
 * */
void unsetOneBit(unsigned int n, int position){
    std::cout << "unset bit " << position - 1 << std::endl;
    n = (n & ~(1 << (position - 1)));
    printBits(n);
}

/*
 * @brief setOneBit is a function that takes a 32bit positive number and a integer to
 * set's to '1' the bit at the nth position of the given number.
 * */
void setOneBit(unsigned int n, int position){
    std::cout << "set bit " << position-1 << std::endl;
    n = (n | (1 << (position - 1)));
    printBits(n);
}

/*
 * @brief toogleBit is a function that takes a 32bit positive number,
 * it turn the bit in the given position to '1' if it was '0' and turn
 * '0' if it was '1'.
 * */
void toogleBit(unsigned int n, int position){
    std::cout << "toggle bit " << position -1 << std::endl;
    n = (n ^ (1 << (position-1)));
    printBits(n);
}

#endif //BITS_BITUTILS_H
