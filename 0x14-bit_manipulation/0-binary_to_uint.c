#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		num *= 2;
		num += (*b - '0');
		b++;
	}
	return (num);
}
