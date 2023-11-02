#include "main.h"

form forms[] = {
    {'c', print_char},
    {'s', print_str},
    {'d', print_int},
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