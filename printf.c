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
		return (-1);
	}

	while (*format != '\0')
	{
		/**printf("loop iteration: %d\n", tracker);**/
		if (*format == '%')
		{
			if (args == NULL)
			{
				print_str("(null)");
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
				/**printf("\nfunc_return value: %d\n", func_return);**/
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
	/**printf("\nstring length: %d\n", tracker);**/
	return (tracker);
}