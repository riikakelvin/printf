#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int ii = *i + 1;
	int precision = -1;

	if (format[ii] != '.')
		return (precision);
	precision = 0;

	for (ii += 1; format[ii] != '\0'; ii++)
	{
		if (is_digit(format[ii]))
		{
			precision *= 10;
			precision += format[ii] - '0';
		}
		else if (format[ii] == '*')
		{
			ii++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = ii - 1;
	return (precision);
}
