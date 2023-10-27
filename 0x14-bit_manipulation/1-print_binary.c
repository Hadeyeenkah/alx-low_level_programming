#include "main.h"

/**
 * power - Calculates the result of raising a base to a given power.
 * @base: The base number.
 * @power: The exponent.
 *
 * Return: The result of (base ^ power).
 */

unsigned long int power(unsigned int base, unsigned int power)
{
	unsigned long int result;
	unsigned int index;

	result = 1;
	for (index = 1; index <= power; index++)
		result *= base;
	return (result);
}
/**
 * print_binary - Prints a decimal number in binary representation.
 * @n: The decimal number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char PrintedOne;

	PrintedOne = 0;
	divisor = power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			PrintedOne = 1;
			_putchar('1');
		}
		else if (PrintedOne == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
