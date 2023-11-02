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
    puts(va_arg(args, char *));
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
}