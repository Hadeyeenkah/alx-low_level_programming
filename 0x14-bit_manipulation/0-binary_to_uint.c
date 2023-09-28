#include "main.h"

/**
 * binary_to_uint - Converts a binary string to
 * an unsigned integer.
 * @b: A string containing the binary number.
 *
 * This function takes a binary string as input and
 * converts it into an equivalent unsigned integer.
 * It iterates through the binary string,
 * validating that each character is
 * either '0' or '1', and calculates
 * the decimal value of the binary representation.
 *
 * @b: The binary string to convert.
 * Return: The converted unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	/* Check for NULL input */
	if (!b)
		return (0);

	/* Iterate through the binary string */
	for (i = 0; b[i]; i++)
	{
		/* Validate that each character is '0' or '1' */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/* Calculate the decimal value of the binary representation */
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

