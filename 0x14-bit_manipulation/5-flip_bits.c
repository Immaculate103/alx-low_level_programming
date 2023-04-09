#include "main.h"

/**
 * flip_bits - returns bit numbers I wanna flip
 * @n: first
 * @m: second
 * Return: bit numbers I wanna flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int discrepancy = n ^ m;
	unsigned int count = 0;

	while (discrepancy != 0)
	{
		count += discrepancy & 1;
		discrepancy >>= 1;
	}

	return (count);
}
