/**
 *  @file       swap_even_odd_bits.c
 *  @brief      C program to swap Even bits with corresponding Odd bits in given 32 nit integer.
 *  @author     Prashant Chikhalkar
 *  @date       16th November 2016
 *  
 **/
 
#include <stdio.h>

unsigned int swapbits (unsigned int num)
{
    // extract all even bits from given number, mask with A = 1010
    unsigned int even_bits = num & 0xAAAAAAAA;
    
    // extract all even bits from given number, mask with 5 = 0101
    unsigned int odd_bits = num & 0x55555555;
    
    // right shift even bits
    even_bits >>= 1;
    
    // left shift odd bits
    odd_bits << 1;
    
    // combine even and odd bits to get final result
    return (even_bits | odd_bits);
}

int main (void)
{
    unsigned int num = 23; // 00010111
    
    // output will be 43 i.e. 00101011
    printf ("%u\n", swapbits (num));
    
    return 0;   
}
