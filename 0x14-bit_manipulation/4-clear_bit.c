#include "main.h"

/**
 * clear_bit - Clears the value of a specific bit to
 * 0 in a given number.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear.
 *
 * This function allows you to set the bit a
 * t the specified index to 0 within the provided number.
 * It performs bounds checking to ensure the
 * index is within a valid range (0 to 63).
 *
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure (if index is out of bounds).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

