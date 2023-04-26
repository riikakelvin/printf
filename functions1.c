#include "main.h"
/**
* print_unsigned - prints unsigned numbers
*@types: List arguements
*@buffer: buffers arrays covering print
*@flags: computes active flags
*@width: shows the width spaces
*@precision: specifies the precision
*@size: specifies on size
*Return: number of characters  printed
*/
int print_unsigned(va_list types. char buffer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsigned(num, size);

	if (num == 0)
		buffer[i--] = '\0';
	buffer[BUFF_SIZE -1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';

		num /= 10;
	}
/*PRINTS UNSIGNED INT IN OCTAL FORMAT*/
/**
* print_octal - prints unsigned numbers in octal
*@types: List arguements
*@buffer: buffers arrays covering print
*@flags: computes active flags
*@width: shows the width spaces
*@precision: specifies the precision
*@size: specifies on size
*Return: number of characters  printed
*/
{
	int i =BUFF_SIZE -2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;
	
	UNUSED(width);

	num = convert_size_unsigned(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num >0)
	{
		buffer[i--] = (num % 8) + '0';
			buffer[i--] = '0';
			i++;
	}
	return (write_unsigned(0, i, buffer, flags, width, precision, size));
}
/**PRINT UNSIGNED NUMs IN HEXADECIMAL FORMAT*/
/*PRINTS UNSIGNED INT IN OCTAL FORMAT*/
/**
* print_hexadecimal - prints unsigned numbers in octal
*@types: List arguements
*@buffer: buffers arrays covering print
*@flags: computes active flags
*@width: shows the width spaces
*@precision: specifies the precision
*@size: specifies on size
*Return: number of characters  printed
*/
int print_hexa(va_list types, char map_to[], char buffer[],
		int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int int_num = num;

	UNUSED(width);

	num = convert_size_unsigned(num, size);

	if (num == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}
	i++;
	return (write_unsigned(0, i, buffer, flags, width, precision, size));
}


