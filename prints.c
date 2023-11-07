#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 * @c: character to be printed
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * _putint - prints an integer to standard output
 * @c: character integer to be printed
 *
 * Return: returns 1 on success
 */

int _putint(char c)
{
	write(1, &c, 4);
	return (1);
}

/**
 * _puts - prints to standard output, one character at a time
 * @str: string to print
 */

void _puts(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
