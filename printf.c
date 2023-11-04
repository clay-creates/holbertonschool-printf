#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int _printf(const char *format, ...)
{
	/**int i = 0;**/
	int tracker = 0;

	va_list args;
	va_start(args, format);

	if (!format)
	{
		fputs("\n", stdout);
		return (0);
	}

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			get_func (*format)(args);
			tracker += 2;
		}
		else
		{
			_putchar(*format);
			tracker += 1;
		}
		format++;
	}
	va_end(args);

	return (tracker);
}