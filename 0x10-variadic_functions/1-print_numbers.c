/**
 * print_numbers - print numbers followed by new line
 * @separator : between Numbers
 * @n : number of arguments
 * Return: Sum or Zero
*/

#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
