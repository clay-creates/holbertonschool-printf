<h1 align="center">Printf</h1>

<h2>Main Objective</h2>

<p>To create a our own, working printf function, without using switch or case statements, instead using typedef structs, function pointers, and a variadic function.</p>


<h2>Our Structure</h2>

<h3><details><summary>main.h</summary></h3>

- Our main header contains our protective statements to open.
- It is followed by inclusion of the *stdarg.h*, *stddef.h*, *stdio.h*, and *stdlib.h* libraries.
- After that is our typedef and struct, named *format* (**struct**) and *form* (**typedef**). Inside of our struct, we have fields to hold our format specifiers (*char op*) and a field to hold the operation we return for those format specifiers <em>(int (*f)(va_list))</em>
- Lastly is the declaration of all of our created prototypes.

</details>

<h3>printf.c</h3>

- Our printf.c file opens with a declaration of the _printf variadic function prototype.
- After we open this, we declare our tracker variable (to return the number of character printed) and we declare our **va_list** named *"args."*
- We open our va_list with **va_start** and set a null check for our format string, returning 0 and printing a newline if format has no data.
- After checking for a null format value, we begin to iterate through the format string with our while loop with its condition set to end when reaching the null termination character *('\0')*.
- Inside of this while loop, set a condition to check if the current value in the format string is "%" and if that is true, it will increment format to the next character and check if that value is stored in our **get_func** function.
- If the following character is a format specifier, then in our *get_func.c* file the program will search through our array for the specifier and return the function to print the specified data type. 
- The pointer function <em>get_fun(*format)</em> then returns to our **printf** code and the value is assigned to a variable called *format_print*.
- If the *format_print* variable is NOT null, then we initialize a variable called *func_return* with the value of <em>format_print(args)</em>. This will assign the proper data type from the format specifier and print the argument value from our format string in the proper location.
- After this we check to see if the *func_return* variable was properly assigned, if it was not, we return and error code.
- Next we calculate the correct amount of character(s) to add to our tracker by incrementing and assigning the amount of characters printed by our function return.
- When we reach the end of our condition checking for the "%" character, we reach an else statement ensuring that we print the values from our format string properly as we iterate through, while also adding the correct amount to our character tracker and incrementing format as we return to the top of our iteration loop.
- When we reach the null terminator, we break out of our while loop, we use <em>va_end(args)</em> to properly end our va_list and then return our tracker value with our correct character count.

<h3>get_func.c</h3>

- Our get_func.c page starts with the opening declaration of our prototype function, establishing that it will take the current character in our function string and our va_list args (declared in our printf.c).
- Opening this function we declare an array using our typedef struct (form) and name the array forms.
- Inside this array we declare our format specifiers by assigning characters that we are looking for and setting operations to return if those characters are found.
- After declaring and initializing an iteration variable, we use a while loop to iterate through the operations in our array (forms), and if the value of our format character matches one of the format specifiers in the array, we return the function located at that space in the array to the function that called get_func.

<h3>print_functions.c</h3>

- Our print_function.c is where we have declared the functions that will be returned during the call of our get_func function.
- The first function that we declare is our print_char function, using our va_list args as its argument. 
We declare a variable to hold our argument (from va_list args) called var_char, then we use putchar to print the value of this to standard output, returning a success value of (1).
- Next up is our print_str function, this also uses our va_list args as the argument. In this function we declare two variables, one to hold the value of our format string (from va_list args), called str, and another to hold a value to be printed, called printed.
Then to return our number of characters printed correctly, we check to see if printed has a value that is not null, if that is true, then we return the string length of our string variable to be added to our counter in printf.c.
- Then we have our print_int function, again using va_list args as our argument. This function calls another custom function called _putint, that uses the write function to standard output with the size of an integer.
Calling _putint we use va_arg(args, int) to look through our va_list args and to assign the data type of int and write to standard output, while returning a success value of (1).
- We then have our print_percent function, once again taking va_list args as our argument. We use (void)args; to aknowledge our va_list args without needing to actually use it. After this, we simply use putchar to print the "%" character and return a success value of (1).

<h3>prints.c</h3>

- Our prints.c file contains our custom functions to print to standard output in our print_functions functions.
-  First is our custom _putchar function, which uses the write function to print a character with the bit size of char, to the standard output.
- Next is our custom _putint function, which does essentially the same thing as our _putchar, using the write function to print with the bit size of int, to the standard output.
- Lastly we have our custom _puts function, which again uses the write function to print to standard output, the only difference is that since we are working with a string, we have to use a while loop to iterate through the string and use write to output each individual character.

<h3>_strlen.c</h3>

