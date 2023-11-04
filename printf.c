#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int _printf(const char *format, ...)
{
/**int i = 0;**/
    int tracker = 0;

    va_list args;
    va_start(args, format);


    while (*format != '\0')
    {
        if (*format == '%') 
        {
            format++;
            tracker += (get_func(*format)(va_arg(args)));
            format++;
        }
        else
        {
            _putchar(*format);
            tracker += 1;
            format++;
        }
    }
    return (tracker);
}