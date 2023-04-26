#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*Flags*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*Various Sizes*/
#define S_LONG 2
#define S_SHORT 1

/**
* struct fmt - Struct operator
* @fmt: Format
* @fn: function in play
*/

struct fmt
{
char fmt;
int (*fn)(va_list, char[], int, int, int, int);
};
/**
* typedef struct fmt fmt_t - struct operator
* @fmt: The format
* fm_t: the associated function
*/

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flag, int width, int precision, int size);

/****FUNCTION TO PRINT REQUIRED OUTPUT****/

int print_char(va_list types, char buffer[], int flag,
		int width, int precision, int size);
int print_string(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_percent(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_int(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_binary(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_unsigned(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_octal(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_hexadecimal(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_hexa_upper(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_hexa(va_list types, char buffer[], int flag,
		int width, int precision,  int size);

int non_printable_char(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_pointer(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
int print_char(va_list types, char buffer[], int flag,
		int width, int precision,  int size);
/**FOR SPECIFIERS8**/
int get_flags(const char *format, int *i);
int get_size(const char *format, int *i;
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);

/*PRINTS STRING IN ROT 13*/
int print_rot13string(va_list types, char buffer[], int flags,
		int width, int precision,  int size);

/*PRINTS STRING IN ROT 13*/
int print_rot13string(va_list types, char buffer[], int flags,
		int width, int precision,  int size);

int handle_write_char(char i, char buffer[], int flags,
		int width, int precision, int size);
int write_numbers(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width,
	       int precision, int lengh, char padd, char extra_i);
int write_pointer(char buffer[], int ind, int lengh, int width,
		int flags, char padd, char extra_k, int_padd_start);

int write_unsigned(int is_negative, int ind, char buffer[], int flags,
		int width, int precision, int size);

/****UTILS***/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsigned(unsigned long int num, int size);


#endif
