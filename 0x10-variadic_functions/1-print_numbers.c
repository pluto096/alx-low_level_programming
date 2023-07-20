#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - functions to print number
 * @separator: constant char to format print out
 * @n: number of integers passed with function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		int x = va_arg(args, int);

		if (!separator)
		{
			printf("%i%s", x, separator);
		}
	}
	va_end(args);
	printf("\n");
}
