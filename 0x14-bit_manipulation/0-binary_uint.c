#include "main.h"

/**
 * binary_to_uint - Converts a binary representation to an unsigned integer.
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The decimal value of the binary number as an unsigned integer, or 0 in case of an error.
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		result <<= 1;
		if (b[index] == '1')
			result += 1;
	}
	return (result);
}
