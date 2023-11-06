#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - format print, looks for format and prints to stout
 * @format: input string
 *
 * Return: return printed character count
 */

int _printf(const char *format, ...)
{
	int tracker = 0;
	int func_return = 0;
	int (*format_print)(va_list);
	char *null_form;
	int i;
	va_list args;

	va_start(args, format);

	if (!format)
	{
		null_form = "(null)";
		for (i = 0; i < 6; i++)
		{
			_putchar(null_form[i]);
		}
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (args == NULL)
			{
				printf("(null)");
				format++;
				continue;
			}
			format++;
			if (!format)
			{
				putchar('\n');
				return (0);
			}
			format_print = get_func(*format);
			if (format_print != NULL)
			{
				func_return = format_print(args);
				if (func_return == -1)
				{
					return (-1);
				}
				tracker += func_return;
			}
		}
		else
		{
			putchar(*format);
			tracker += 1;
		}
		format++;
	}
	va_end(args);
	return (tracker);
}
