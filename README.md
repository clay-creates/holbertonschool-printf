<h1 align="center">Printf</h1>

<h2>Main Objective</h2>

<p>To create a our own, working printf function, without using switch or case statements, instead using typedef structs, function pointers, and a variadic function.</p>


<h2>Our Structure</h2>

<h3>main.h</h3>

- Our main header contains our protective statements to open.
- It is followed by inclusion of the stdarg.h, stddef.h, stdio.h, and stdlib.h libraries.
- After that is our typedef and struct, named format (struct) and form (typedef). Inside of our struct, we have fields to hold our format specifiers (char op) and a field to hold the operation we return for those format specifiers (int (*f)(va_list)).
- Lastly is the declaration of all of our created prototypes.

<h3>printf.c</h3>

- Our printf.c file opens with a declaration of the _printf variadic function prototype.
- After we open this, we declare our tracker variable (to return the number of character printed) and we declare our va_list named "args."
- We open our va_list with va_start and set a null check for our format string, returning 0 and printing a newline if format has no data.
- After checking for a null format value, we begin to iterate through the format string with our while loop with its condition set to end when reaching the null termination character ('\0').
- Inside of this while loop, set a condition to check if the current value in the format string is "%" and if that is true, it will increment format to the next character and check if that value is stored in our get_func function.