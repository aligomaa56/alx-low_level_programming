#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print all types
 * @format : type of input
 * Return: printed type
*/

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	int i = 0;
	char c;
	float f;
	char *s;

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);

			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
