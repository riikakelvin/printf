#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int size, ii = *i + 1;

	if (format[ii] == 'l')
		size = S_LONG;
	else if (format[ii] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = ii - 1;
	else
		*i = ii;
	return (size);
}
