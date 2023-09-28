#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at
 * a specified index in a decimal number.
 * @n: The decimal number to search within.
 * @index: The index of the bit to retrieve.
 *
 * This function takes a decimal number and an index as
 * input and returns
 * the value (0 or 1) of the bit at the specified index.
 * It performs bounds
 * checking to ensure the index is within a valid range (0 to 63).
 *
 * @n: The decimal number in which to search for the bit.
 * @index: The index of the bit to
 * retrieve (0 for the least significant bit).
 *
 * Return: The value of the bit at the specified index or
 * -1 if the index is out of bounds.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	/* Check if the index is out of bounds */
	if (index > 63)
		return (-1);

	/* Extract the value of the bit at the specified index */
	bit_val = (n >> index) & 1;

	return (bit_val);
}

