*This project has been created as part of the 42 curriculum by finarako.*

# ft_printf

## Description

`ft_printf` is a re-implementation of the standard C library function `printf`. The goal of this project is to understand how variadic functions work in C and to replicate the core formatting behavior of `printf` from scratch, without using the original function.

The implemented conversion specifiers are:

- `%c` — prints a single character
- `%s` — prints a string
- `%p` — prints a pointer address in hexadecimal
- `%d` / `%i` — prints a signed decimal integer
- `%u` — prints an unsigned decimal integer
- `%x` / `%X` — prints an unsigned integer in lowercase / uppercase hexadecimal
- `%%` — prints a literal percent sign

## Instructions

### Compilation

Clone the repository and compile the library using `make`:

```bash
git clone <my-repo-url>
cd ft_printf
make
```

This will produce a static library file: `libftprintf.a`.

### Usage in your project

To use `ft_printf` in another C project, include the header and link against the library:

```bash
cc the_file.c -L. -lftprintf -o your_program
```

Then in your source file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You are %d years old.\n", "world", 42);
    return (0);
}
```

### Makefile rules

| Rule | Description |
|------|-------------|
| `make` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Rebuilds everything from scratch |

## Algorithm and Data Structure

### Overall approach

The core of `ft_printf` relies on **variadic functions** using the `<stdarg.h>` macros (`va_list`, `va_start`, `va_arg`, `va_end`). The function iterates over the format string character by character. When it encounters a regular character, it writes it directly to the standard output. When it encounters a `%`, it reads the next character to determine which conversion specifier to apply, then calls the appropriate handler function.

### Why this structure?

Rather than handling all specifiers inside a single large function, each specifier is delegated to a dedicated helper function (e.g., `ft_putstr`, `ft_putnbr_hex`, `ft_putchar`, etc.). This keeps the code modular, readable, and easy to debug or extend.

For integer-to-string conversions (`%d`, `%i`, `%u`, `%x`, `%X`), a recursive or iterative base-conversion algorithm is used: the number is repeatedly divided by the base (10 or 16), and the remainders are collected to build the output string in the correct order.

For pointer printing (`%p`), the address is cast to an `unsigned long` and printed as a hexadecimal value prefixed with `0x`.

The function returns the **total number of characters printed**, which is accumulated across all the individual write calls throughout the parsing loop.

### No bonus

This implementation covers only the mandatory part of the subject. No additional flags (such as `-`, `0`, `*`, `.`, width, or precision) were implemented.

## Resources

### Documentation & References

- [Linux man page — printf(3)](https://man7.org/linux/man-pages/man3/printf.3.html)
- [cppreference — printf](https://en.cppreference.com/w/c/io/fprintf)
- [cppreference — va_arg / stdarg.h](https://en.cppreference.com/w/c/variadic)
- [42 Docs — ft_printf subject](https://cdn.intra.42.fr/pdf/pdf/131966/en.subject.pdf)

### Tutorials

- [Variadic functions in C — GeeksforGeeks](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- [How printf works internally — Explained Simply (YouTube)](https://www.youtube.com/)

### AI Usage

AI was used during this project strictly for **understanding concepts**, including:

- How variadic functions work internally in C (`va_list`, `va_start`, `va_arg`, `va_end`)
- How base conversion algorithms work for printing integers in different bases (decimal, hexadecimal)
- How pointer addresses are represented and printed in C

No AI was used to generate, write, or debug actual code for this project.