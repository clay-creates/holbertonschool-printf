#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

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

	putchar(var_char);
	return (1);
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
	int len = 0;
	int i;

	str = va_arg(args, char *);

	if (str != NULL)
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		str = "(null)";
		len = 6;
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	return (len);
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
	int abs_val, num_len, digit_tracker;
	int val = va_arg(args, int);

	if (val == INT_MIN)
	{
		putchar('-');
		func_return++;
		abs_val = INT_MAX;
	}
	else if (val < 0)
	{
		putchar('-');
		func_return++;
		abs_val = val * -1;
	}
	else
	{
		abs_val = val;
	}
	num_len = abs_val;
	digit_tracker = 1;

	/**this is where you'll want to reference atoi for documentation
	 * the iteration is similar
	 * knock one of them back a digit, increase the digit of the other
	 * then print them modulos from dividing by 10
	 * that makes sense, yeah?
	 */
	while (digit_tracker > 9)
	{
		if (num_len > 9)
		{
			num_len = num_len / 10;
			digit_tracker = digit_tracker * 10;
		}
	}
	while (digit_tracker > 1)
	{
		if (val == INT_MIN && digit_tracker == 1)
		{
			putchar('8'); /**honestly please ask Cody about this I legit dk what the hecky is happening*/
			func_return++;
			digit_tracker = digit_tracker / 10;
		}
		else
		{
			func_return++;
			putchar(((abs_val / digit_tracker) % 10) + '0');
			digit_tracker = digit_tracker / 10;
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
	putchar('%');
	return (1);
}
