#include "main.h"

/**
 * flip_bits - Counts the number of
 * differing bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * This function calculates the number
 * of bits that need to be changed in
 * the binary representation of one number to
 * transform it into another.
 * It accomplishes this by performing an
 * XOR operation on the two numbers
 * and counting the set bits (1s) in the result.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

