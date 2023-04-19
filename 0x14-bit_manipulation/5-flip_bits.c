#include "main.h"
/**
 * flip_bits - A function that returns a number of bits needed to be flipped
 * @n: Starting point
 * @m: The targeted bit
 * Return: Number of bits flipped
 * Author - BRANDON ODHIAMBO
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned int bit = 0, flip;
  
  flip = n ^ m;
  while (flip)
  {
    bit += flip & 1;
    flip >>= 1;
  }
  return (bit);
}
