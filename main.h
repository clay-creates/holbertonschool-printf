#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * FormatSpec - structure for format specifiers
 * @op: operator character
 * @f: function to be returned
 */

typedef struct format
{
	/*Field to hold format specifier*/
	char op;

	/*Field to hold operation*/
	int (*f)(va_list);

} form;

int (*get_func(char format))(va_list args);

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_percent(va_list args);

int _putint(char);
void _putchar(char);
int _strlen(char *s);
void _puts(const char *str);

#endif