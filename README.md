*This project has been created as part of the 42 curriculum by omyagci.*

# ft_printf

## Description

The `ft_printf` project is a comprehensive reimplementation of the standard C library function `printf`. Its primary objective is to master the usage of **variadic functions**, enabling the handling of an undefined number of arguments. This project goes beyond basic I/O operations; it involves parsing complex format strings, managing low-level memory conversions (such as hexadecimal and pointer addresses), and structuring a modular, reusable static library. By mimicking the original behavior, `ft_printf` serves as a foundational exercise in algorithm design and precise data manipulation in C.

## Instructions

### Compilation

To compile the library, run the following command in the root of the repository:

```bash
make
```

This will generate the static library file `libftprintf.a`.

Other available make commands:
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library file.
- `make re`: Recompiles the library from scratch.

### Usage

To use `ft_printf` in your project, include the header file and link against the library:

1. Include the header in your C file:
   ```c
   #include "ft_printf.h"
   ```

2. Compile your project with the library:
   ```bash
   cc main.c libftprintf.a -o my_program
   ```

3. Run your program:
   ```bash
   ./my_program
   ```

## Algorithm and Data Structures

### Variadic Arguments
The core data structure used in this project is `va_list` from the `<stdarg.h>` library. This allows the function to accept a variable number of arguments, which is essential for `printf` as the number of arguments depends on the format string.

### Parsing Logic
The main algorithm iterates through the `format` string character by character.
1. **Standard Characters:** If the current character is not a `%`, it is written directly to the output using `write`.
2. **Format Specifiers:** If a `%` is encountered, the algorithm looks at the next character to determine the type of data to print (e.g., `c`, `s`, `d`, `x`). It then delegates the task to a specific helper function (e.g., `ft_print_string`, `ft_print_hexl`) via the `ft_formats` dispatcher.

### Recursion for Number Printing
To handle numeric conversions (integers, unsigned integers, and hexadecimal values) without using large buffers or complex memory management, recursion is used.
- The function divides the number by the base (10 or 16) recursively until the quotient is zero.
- As the recursion unwinds, it prints the remainder (the digit) character by character.
- This approach simplifies the logic for printing numbers in the correct order (most significant digit to least significant digit) and calculating the total length printed.

## Resources

- **C Library Documentation:** `man printf`, `man 3 stdarg`.
- **Online Resources:** https://www.geeksforgeeks.org, https://www.tutorialspoint.com
- **AI Usage:** During the project process, AI was used to theoretically verify edge cases related to format specifiers.