#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/***/

int _printf(const char *format, ...)
{
/**int i = 0;**/
/**int tracker = 0;**/

    while (format != NULL)
    {
        if (*format == '%') {
                format++;
                (*get_func(*format)(va_list, args));
            }
    }
}