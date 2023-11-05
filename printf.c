#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int _printf(const char *format, ...)
{
	/**int i = 0;**/
	int tracker = 0;
	int func_return = 0;
	int (*format_print)(va_list);

	va_list args;
	va_start(args, format);

	if (!format)
	{
		_putchar('\n');
		return (0);
	}

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			format_print = get_func(*format);
			if (format_print != NULL)
			{
				func_return = format_print(args);
				if (func_return == -1)
				{
					return (-1);
				}
				tracker += func_return;
				printf("func_return value: %d", func_return);
			}
			format++;
		}
		else
		{
			_putchar(*format);
			tracker += 1;
		}
		format++;
	}
	va_end(args);
	printf("\nstring length: %d\n", tracker);
	return (tracker);
}