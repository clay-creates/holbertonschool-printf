#ifndef MAIN_H
#define MAIN_H

/**
 * FormatSpec - structure for format specifiers
 * @op: operator character
 * @f: function to be returned
 */

typedef struct format
{
    /*Field to hold format specifier*/
    char *op;

    /*Field to hold operation*/
    int (*f)(va_list args);

} form;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);

#endif