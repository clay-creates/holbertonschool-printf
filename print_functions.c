#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * print_char - prints a character
 * @args: va_list args
 *
 * Return: return 1 on success, NULL on fail
 */

int print_char(va_list args)
{
	char var_char;

	var_char = va_arg(args, int);

	return(_putchar(var_char));
}

/**
 * print_str - prints a string
 * @args: va_list args
 *
 * Return: return 1 on success or NULL on fail
 */

int print_str(va_list args)
{
	char *str;
	int printed;
	int i;

	str = va_arg(args, char *);
	printed = 0;

	/**Null check for variable assignment*/
	if (str == NULL)
		str = "(null)";
	
	printed = _strlen(str);

	for (i = 0; i < printed; i++)
		_putchar(str[i]);

	/**Return output on success, return -1 on fail*/

	if (printed >= 0)
	{
		return (printed);
	}
	else
	{
		return (-1);
	}
}

/**
 * print_int - prints integer(s)
 * @args: va_list args
 *
 * Return: returns 1 on success or NULL on fail
 */

int print_int(va_list args)
{
	int func_return = 0;
	int val = va_arg(args, int);

	/**Handle case of INT_MIN*/

	if (val == INT_MIN)
	{
		putchar('-');
		func_return++;
		val = INT_MAX;
	}
	else if (val < 0)
	{
		putchar('-');
		func_return++;
		val = -val;
	}

	if (val == 0)
	{
		putchar('0');
		func_return++;
	}
	else
	{
		int digit_tracker = 1;

		/**Calculate number of digits*/

		while (val / digit_tracker > 9)
		{
			digit_tracker *= 10;
		}

		/**Print digits*/

		while (digit_tracker > 0)
		{
			putchar((val / digit_tracker) + '0');
			func_return++;
			val %= digit_tracker;
			digit_tracker /= 10;
		}
	}

	return func_return;
}

/**
 * print_percent - prints a percent sign
 * @args: va_list args (not used in output)
 *
 * Return: return 1 on success
 */

int print_percent(va_list args)
{
	(void)args;
	return(_putchar('%'));
}
