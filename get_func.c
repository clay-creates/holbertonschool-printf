#include "main.h"
#include <stdio.h>

/**
 * get_func - function to find format specifiers and return operation
 * @format: current character in format string
 *
 * Return: returns function from forms array on success, NULL on fail
 */

int (*get_func(char format))(va_list args)
{
	form forms[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'%', print_percent},
		{'\0', NULL}};

	int i = 0;

	while (forms[i].op != '\0')
	{
		if (forms[i].op == format)
			return (forms[i].f);
		i++;
	}
	return (NULL);
}
