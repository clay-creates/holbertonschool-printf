#include "main.h"
#include <stdio.h>

int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int _putint(char c)
{
    write(1, &c, 4);
    return (1);
}