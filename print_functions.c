#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int printed;

	str = va_arg(args, char *);
	printed = fputs(str, stdout);

	/**Null check for variable assignment*/

	if (str == NULL)
	{
		str = "(nil)";
	}

	/**Return output on success, return 0 on fail*/

	if (printed >= 0)
	{
		return (_strlen(str));
	}
	else
	{
		return (0);
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
	_putint(va_arg(args, int));
	/**returning placeholder*/
	return (1);
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
