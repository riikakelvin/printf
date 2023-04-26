#include "main.h"
/**
* print_char - prints a character
*@types: List arguements
*@buffer: buffers arrays covering print
*@flags: computes active flags
*@width: shows the width spaces
*@precision: specifies the precision
*@size: specifies on size
*Return: number of characters  printed
*/
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
char c = va_arg(types, int);
return (handle_write_char(k, buffer, flags, width, precision, size));
}

/*PRINTS STRINGS*/
/**
*print_string - displays a string
*@types: List arguements used
*@buffer: buffers arrays to cover the print
*@flags: computes active flags
*@width: shows the width spaces
*@precision: precision condition
*@size: specific size
*Return: number of characters printed out
*/
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
int lengh = 0, i;
char *str = va_arg(types, char *);

UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);
	if (str == NULL)
{
	str = "(null)";
	if (precision >= 6)
	str = " ";
}
	while (str[length] != '\0')
	{
	length++;
	}
	if (precision >= 0 && precision < length)
	{
	length = precision;
	}
	if (width > length)
	if (flags & F_MINUS)
	{
		write(1, &str[0], length);
	}
	for (i = width - length; i > 0; i--)
	{
		write(1, " ", 1);
		return (width);
	}
	else
	{
	for (i = width - lengh; i > 0; i--)
	write(1, " ", 1);
	write(1, &str[0], length);
	return (width);
	}
	return (write(1, str, length));
}

/*PRINTS THE PERCENT*/

/**
*print_percent - displays percentage symbol
*@types: List arguements used
*@buffer: buffers arrays to cover the print
*@flags: computes active flags
*@width: shows the width
*@precision: specifies precision condition
*@size: specific size
*Return: number of characters actually printed out
*/
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision,  int size)
{
UNUSED(buffer);
UNUSED(flags);
UNUSED(size);
UNUSED(types)
UNUSED(width);
UNUSED(precision);

return (write(1, "%%", 1));
}

/*PRINTS INT*/
/**
*print_int - displays integers
*@types: List arguements used
*@buffer: buffers arrays to cover the print
*@flags: computes active flags
*@width: shows the width
*@precision: specifies precision condition
*@size: specific size
*Return: number of characters printed out
*/
int print_int(va_list types, char buffer[],
		int flags, int width, int precision,  int size)
{
int i = BUFF_SIZE - 2;
int is_negative = 0;
long int  n = va_arg(types, long int);
unsigned long int num;

n = convert_size_number(n, size);

if (n == 0)
buffer[k--] = '\0';

buffer [BUFF_SIZE - 1] = '\0';
num = (unsigned long int)n;

if (n < 0)
{
num = (unsigned long int)((-1) * n);
is_negative = 1;
}
while (num > 0)
{
buffer[i--] = (num % 10) + '0';
num /= 10;
}
i++;
return (write_number(is_negative, i, buffer, flags, width, precision, size));
}
/*TO PRINT BINARY*/
/**
*print_binary - displays unsigned numbers
*@types: List arguements used
*@buffer: buffers arrays to cover the print
*@flags: computes active flags
*@width: shows the width spaces
*@precision: specifie precision condition
*@size: specific size
*Return: number of characters printed out
*/

int print_binary(va_list types, char buffer[],
		int flags, int width, int precision,  int size)
{
unsigned int n, m, i, sum;
unsigned int a[32];
int count;

UNUSED(buffer);
UNUSED(flags);
UNUSED(size);
UNUSED(width);
UNUSED(precision);

n = va_arg(types, unsigned int);
m = 2147483648;
a[0] = n / m;

for (i = 1; i < 32; i++)
{
m /= 2;
a[i] = (n / m) % 2;
}
for (i = 0; sum = 0; count = 0; i < 32; i++)
{
sum += a[i];
if (sum | i == 31)
{
char z = '0' + a[i];
write(1, &z, 1);
count++;
}
}
return (count);
}
