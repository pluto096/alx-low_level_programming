#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all it arguments
 * @n: first parameter
 *
 * Return: Sum of parameters if successful and if n is
 * equals 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, unsigned int);

		sum += x;

	}
	va_end(args);
	return (sum);
}
