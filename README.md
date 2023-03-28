# What is printf?

---

It is a function used to format and print a series of characters and values to the standard output.

# _printf

---

This project is about creating a mini-version of the C library function printf by implementing **variadic functions.**

## Prototype

```c
int _printf(const char *format, ...)
```

## **Parameters**

- **format** − This is the string that contains the text to be written to stdout. It can optionally contain format tags that are replaced by the values specified in the argument-list […] which may take a variable number of arguments of any type and formatted as requested.

### Example

```c
_printf("I love %s in %c", "coding", 'C');
```

### Supported Format Tags

| Type | Output |
| --- | --- |
| c | single character |
| s | string of characters |
| % | percent sign |
| R | string in encoded in rot13 format |
| r | string in reverse |
| d | integer in decimal |
| i | integer |
| b | binary |
| x | lowercase hexadecimal |
| X | uppercase hexadecimal |
| o | octal |
| u | unsigned decimal integer |

## Repository Breakdown

| File | Decription |
| --- | --- |
| https://github.com/GalalMohammed/printf/blob/main/main.h | header file with prototypes |
| https://github.com/GalalMohammed/printf/blob/main/printf.c | contains functions to print formatted string and search for tags |
| https://github.com/GalalMohammed/printf/blob/main/printNumbers.c | contains functions to handle numeric tags |
| https://github.com/GalalMohammed/printf/blob/main/printstr.c | contains function to handle string tags |
| https://github.com/GalalMohammed/printf/blob/main/strManipulate.c | contains functions to handle string convertion |
| https://github.com/GalalMohammed/printf/blob/main/_putchar.c | putchar function implementation |

## Functions

| Function | Description |
| --- | --- |
| _putchar | write a character to stdout |
| _printf | prints formatted string to stdout |
| numbers_switcher | determine which print function to use to print numbers |
| handle_char_str_percent | determine which print function to use to print strings and characters |
| printstr | print a string |
| print_int | prints decimal numbers, positive and negative |
| print_binary | prints integer in binary representation |
| print_unsignedInt | prints unsigned numbers |
| print_octal | prints unsigned numbers in octal representation |
| print_hex | prints unsigned numbers in hex representation |
| my_itoa | integer to ascii |
| rot13 | Encodes a string using rot13 |
| toUpper | Changes all lowercase letters of a string to uppercase |
| _strdup | Duplicate a string |
| _strrev | Reverses a string |

## Usage

The directory contents should be compiled with the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```