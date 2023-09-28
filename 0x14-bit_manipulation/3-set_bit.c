#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1
 * in a given number.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set to 1.
 *
 * This function allows you to set the bit at
 * the specified index to 1 within the provided number.
 * It performs bounds checking to ensure the
 * index is within a valid range (0 to 63).
 *
 * @n: Pointer to the number to change.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure (if index is out of bounds).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

