#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a specific bit to 0 at the given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1UL << index);

	return (1);
}
