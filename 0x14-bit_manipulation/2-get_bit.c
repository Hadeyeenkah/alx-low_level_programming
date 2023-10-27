#include "main.h"
/**
 * get_bit - Retrieves the value of a specific bit at the given index.
 * @n: The number to examine.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index (0 or 1), or
 * -1 in case of an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bitValue;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask = 1UL << index;
	bitValue = n & mask;
	return (bitValue == mask ? 1 : 0);
}
