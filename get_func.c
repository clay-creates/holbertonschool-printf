#include "main.h"

form forms[] = {
    {print_char, 'c'},
    {print_str, 's'},
    {print_int, 'd'},
    {NULL, NULL}};

int (*get_func(char format))(va_list args)
{
    int i = 0;

    while (form[i] != NULL)
    {
        if (form[i].op == format)
            (form[i].*f)
    }
    i++;
}