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
	int abs_val;
	int num_len;
	int digit_tracker;

	abs_val = val;

	if (val == INT_MIN)
	{
		func_return += _putchar('-');
		abs_val = INT_MAX;
	}
	else if (val < 0)
	{
		func_return += _putchar('-');
		abs_val = -val;
	}
	
	num_len = abs_val;
	digit_tracker = 1;

	/**if (val == 0)
	{
		putchar('0');
		func_return++;
	}Gotta ask Clay about this*/

	/**debug print conirmation we got here**/
	/**printf("current func_return: %d\n", func_return);*/

	/**Calculate number of digits*/
	while (num_len > 9)
	{
		num_len = num_len / 10;
		digit_tracker = digit_tracker * 10;
		/**another debug print*/
		/**printf("num_len: %d\ndigit_tracker: %d", num_len, digit_tracker);*/
	}

	while (digit_tracker >= 1)
	{
		if (val == INT_MIN && digit_tracker == 1)
		{
			func_return += _putchar('8'); /**it's something about the last/first char in int min is 8*/
			digit_tracker = digit_tracker / 10;
		}
		else
		{
			func_return += _putchar(((abs_val / digit_tracker) % 10) + '0');
			digit_tracker = digit_tracker /10;
		}
	}

	return (func_return);
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
