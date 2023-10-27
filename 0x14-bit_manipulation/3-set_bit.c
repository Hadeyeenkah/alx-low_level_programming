#include "main.h"

/**
 * set_bit - Sets the value of a specific bit to 1 at the given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index at which to set the bit to 1.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBitMask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setBitMask = 1UL << index;
	*n = *n | setBitMask;

	return (1);
}
