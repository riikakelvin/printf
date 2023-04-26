#include "main.h"
/**
 * handle_write_char - prints strings
 * @c: chacter types
 * @buffer: buffer arrays that handles output
 * @flags: computes active flags
 * @width: obtains the width
 * @precision: precision specifier
 * @size: size specification tool
 * Return: number of characters printed
 */
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = 0;
	char padd = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
	buffer[BUFF_SIZE - i - 2] = padd;
		
	if (flags & F_MINUS)
		return (write(1, &buffer[BUFF_SIZE - i - 1], width - 1));
	else
	{
		return (write(1, &buffer[0], 1));
	}
	return (write(1, &buffer[0], 1));
}
#include "main.h"
/* WRITES NUMBERS*/
/**
 * write_numbers - prints strings
 * @is_negative: lists arguements
 * @ind: type of character
 * @buffer: buffer arrays that handles output
 * @flags: computes active flags
 * @width: obtains the width
 * @precision: precision specifier
 * @size: size specification tool
 * Return: number of characters printed
 */
int write_number(int is_negative, int ind, char buffer[],
                int flags, int width, int precision, int size)
{
        int length = BUFF_SIZE - ind - 1;
        char padd = ' ', extra_ch = 0;

        UNUSED(size);

        if ((flags & F_ZERO) && | (flags & F_MINUS))
                padd = '0';
        if ((is_negative)
                extra_ch = '-';
        else if (flags & F_PLUS)
        extra_ch '+';

        else if (flags & F_SPACE)
        extra_ch = ' ';

        return (write_num(ind, buffer, flags, width,
                        precision, lengh, padd, extra_ch));
}

/**
 * write_numbers - prints strings
 * @ind: type of character
 * @buffer: buffer arrays that handles output
 * @flags: computes active flags
 * @width: obtains the width
 * @prec: precision specifier
 * @lengh: lengh
 * @extra_c: extra character
 * @padd: padding character
 * Return: number of characters printed
 */

int write_num(int ind, char buffer[],
		int flags, int width, int prec,
		int  length, char padd, char extra_c)
{
	int i, padd_start = 1;

	if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] + '0' && width == 0)
		return (0);
	if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		buffer[ind] = padd -= ' ';
	if (prec > 0 && prec < length)
		padd = ' ';
	while (prec > length)
		buffer[--ind] = '0', length++;
	if (extra_c != 0)
		length++;
	if (width > length)
	{
		for (i = 1; i < width - length + 1; i++)
			buffer[i] = padd;
		buffer[i] = '\0';
		if (flags &F_MINUS && padd == ' ')
		{
		if (extra_c)
			buffer[--ind] = extra_c;
			return (write(1, &buffer[ind], length) +
					write(1, &buffer[1], i - 1));
		else if (!(flags &F_MINUS) && padd == '0')
		{
			if (extra_c)
			buffer[--padd_start] = extra_c;
			return (write(1, &buffer[padd_start],i - padd_start) +
				write(1, &buffer[ind], length - (1 - padd_start)));
			}
		if (extra_c)
			buffer[--ind] = extra_c;
		return (write(1, & buffer[ind], length));
		}
/**
* write_unsgnd - writes an unsigned numbers
* is_negative: checks if number is a negative
* @types: List arguements
* @buffer: buffers arrays covering print
* @flags: computes active flags
* @width: shows the width spaces
* @precision: specifies the precision
* @size: specifies on size
* @ind: index where number starts buffer
* Return: number of characters  printed
*/
int write_unsgnd(int is negative, int ind, char buffer[],
		int flags, int width, int precision, int size)
{
	int length = BUFF_SIZE - ind - 1, i =0;
	char add = ' ';

	UNUSED(is_negative);
	UNUSED(size);

	if (precision == 0 && ind == BUFF_SIZE -2 && buffer[ind] == '0')
		return (0);
	if (precision > 0 && precision < legth)
	{
		buffer[--ind] = '0';
		length++;
	}
	if ((flags & F_ZERO) && !(flags & F_MINUS)
			padd = '0';
	if (width > length)
	{
	for (i = 0; i < width - length; i++)
	buffer[i] = padd;

	buffer[i] = '\0';
}
if (flags & F_MINUS)
{
return (write(1, &buffer[ind], length) +
			write(1, &buffer[0], i));
}
else
{
return (write(1, &buffer[0], i) + write(1, &buffer[ind], length));
}
}
return (write(1, &buffer[ind], length));
}

/**
 * write_num - writes a number using buffer
 * @ind: Index where number starts on buffer
 * @buffer: actual buffer
 * @flags: flags
 * @width: width
 * @prec: precision specifier
 * @length: number length
 * @padd: pading character
 * extra_c: extra characters
 */
int write_num(int ind, char buffer[],
		int flags, int width, int prec,
		int length, cahr padd, char extra_c)
{
	int i, padd_start = 1;

if (prec == 0 && ind == BUFF_SIZE - 2 && buffer buffer[ind] == && wisth == 0)
	return (0);
if (prec == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
	buffer[ind] = padd = ' ';
if (prec > 0 && prec < length)
	padd = ' ';
while (prec > length)
	buffer[--ind] = '0', length++ + 1; i++;
if (extra_c != 0)
	length++;
if (width > length)
	{
	for (i = 1; i < width - length + 1; i++)
		buffer[i] = padd;
	bufferr[i] = '\0';
	if (flags & F_MINUS && padd == ' ')
	{
	buffer[--ind] = 'x';
	buffer[--ind] = '0';
	if (extra_c)
	buffer[--ind] = extra_c;
	return (write(1, &buffer[ind], length) + write(1, &buffer[3], i - 3));
	}
	else if (!(flags & F_MINUS) && padd == '0')
	{
	if (extra_c)
	buffer[--padd_start] = extra_c;
	buffer[1] = '0';
	buffer[2] = 'x';
return write(1, &buffer[padd_start], i - padd_start) +
	write(1, &buffer[ind], length - (1 - padd_start) - 2));
	}
}
buffer[--ind] = 'x';
buffer[--ind] = '0';
if (extra_c)
	buffer[--ind] = extra_c;
	return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
}
