#include "main.h"

int (*get_func(char format))(va_list args)
{
form forms[] = {
    {'c', print_char},
    {'s', print_str},
    {'d', print_int},
    {NULL, NULL}};


    int i = 0;

    while (form[i] != NULL)
    {
        if (form[i].op == format)
            (form[i].*f)
    }
    i++;
}