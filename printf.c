#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int _printf(const char *format, ...)
{
	/**int i = 0;**/
	int tracker = 0;

	/**Flag to skip next character after "%"*/
	int skip = 0;

	va_list args;
	va_start(args, format);

	if (!format)
	{
		fputs("\n", stdout);
		return (0);
	}

	while (*format != '\0')
	{
		if (skip)
		{
			skip = 0; /** Reset the flag and do not advance*/
		}
		else if (*format == '%')
		{
			format += 2;
			tracker += (get_func(*format)(args));
			skip = 1; /** Set flag to skip character */
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