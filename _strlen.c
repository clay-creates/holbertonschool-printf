#include "main.h"

/**
 * _strlen - starting point of the function, determines length of a string
 *
 * @s: string to be measured
 *
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
