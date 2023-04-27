#include "main.h"
/**
 * get_flags - Establishes active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags
 */
int get_flags(const char *format, int *i)
{
	int j, ii;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (ii = *i + 1; format[ii] != '\0'; ii++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[ii] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
		if (FLAGS_CH[j] == 0)
			break;
	}
	*i = ii - 1;
	return (flags);
}
