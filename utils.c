#include "main.h"
/**
 * is_printable - gauages ptitability of char
 * @c: Char under evaluation
 * Return: 1 if c is printable, else 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

/**
 * append_hexa_code - append ASCII in hexadecimal format to buffer
 * @buffer: Array of characters
 * @i: indexing at point of appending
 * @ascii_code: actual ASCII code
 * Return: always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit - confirms if char is a digit
 * @c: Char to-be evaluated
 * Return: if digit, 1, otherwise 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * convert_size_number - cast a numberinto specified size
 * @num: Number to be casted
 * @size: Number showing type to be casted
 * Return: already casted value
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * convert_size_unsgnd - Casts number to be specified
 * @num: Number to be casted
 * @size: Number showing type to be casted
 * Return: casted value
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
