#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int ii, width = 0;

	for (ii = *i + 1; format[ii] != '\0'; ii++)
	{
		if (is_digit(format[ii]))
		{
			width *= 10;
			width += format[ii] - '0';
		}
		else if (format[ii] == '*')
		{
			ii++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = ii - 1;
	return (width);
}
