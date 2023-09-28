#include "main.h"

/**
 * print_binary - Prints the binary representation of
 * a decimal number.
 * @n: The decimal number to print in binary.
 *
 * This function takes an unsigned long integer as
 * input and prints its
 * binary representation.
 * It iterates through the bits of the input number
 * from the most significant bit to the least significant bit,printing '1'
 * for each set bit and '0' for each unset bit.
 * Leading zeros are omitted,
 * and at least one '0' is printed if the input is zero.
 *
 * @n: The decimal number to convert and print in binary.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	/* Iterate through the bits of the input number */
	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		/* Print '1' for each set bit and track the count */
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		/* Print '0' after the first '1' is encountered */
		else if (count)
			_putchar('0');
	}

	/* Print at least one '0' if the input is zero */
	if (!count)
		_putchar('0');
}

