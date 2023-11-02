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
    int (*f)(va_list op_list);

} form;

int _printf(const char *format, ...);

int print_char(va_list op_list);
int print_str(va_list op_list);
int print_int(va_list op_list);

#endif