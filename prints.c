#include "main.h"
#include <unistd.h>

void _putchar(char c)
{
	write(1, &c, 1);
}

int _putint(char c)
{
	write(1, &c, 4);
	return (1);
}

void _puts(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
