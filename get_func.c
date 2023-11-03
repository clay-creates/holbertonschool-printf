#include "main.h"
#include <stdio.h>

int (*get_func(char format))(va_list args)
{
form forms[] = {
    {'c', print_char},
    {'s', print_str},
    {'d', print_int},
    {'\0', NULL}};


    int i = 0;

    while (forms[i].op != '\0')
    {
        if (forms[i].op == format)
			(forms[i].f);
		i++;
    }
}
