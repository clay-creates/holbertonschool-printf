#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a character
 * @va_list: list of arguments passed to printf
 * @op_list: array of format specifiers
 *
 * Return: return 1 on success, NULL on fail
 */

int print_char(va_list args)
{
	putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints a string
 * @va_list: list of arguments passed to printf
 * @op_list: array of format specifiers
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
		return (printed);
	}
	else
	{
		return (0);
	}
}

/**
 * print_int - prints integer(s)
 * @va_list: list of arguments passed to printf
 * @op_list: array of format specifiers
 *
 * Return: returns 1 on success or NULL on fail
 */

int print_int(va_list args)
{
	_putint(va_arg(args, int));
	/**returning placeholder*/
	return (0);
}