# Exercise: camel_to_snake

## Description

The task is to write a program that converts a string in lowerCamelCase format into snake_case format. The string is in lowerCamelCase if:

- The first word starts with a lowercase letter.
- Every subsequent word starts with an uppercase letter, with all the other letters lowercase.

The string should be converted into snake_case, where:

- All letters are in lowercase.
- Each word is separated by an underscore (`_`).

## Requirements

- **File**: `camel_to_snake.c`
- **Allowed functions**: `malloc`, `free`, `realloc`, `write`

### Expected behavior:

- If the string is in lowerCamelCase, it should be printed in snake_case.
- If the program is called without any argument, it should print just a newline.

### Examples:

- Input: `./camel_to_snake "hereIsACamelCaseWord"`
  
  Output:
  ```
  here_is_a_camel_case_word
  ```

- Input: `./camel_to_snake "helloWorld"`
  
  Output:
  ```
  hello_world
  ```

- Input: `./camel_to_snake`
  
  Output:
  ```
  (only a newline)
  ```

## Solution

### 1. Understanding the Conversion Process

To convert a string from lowerCamelCase to snake_case:

- **Lowercase conversion**: If the character is uppercase (ASCII between `65` and `90`), it should be converted to lowercase by adding `32` to its ASCII value.
  
- **Underscore addition**: After converting an uppercase letter to lowercase, an underscore `_` is inserted before printing the lowercase letter to separate the words in the snake_case format.

### 2. Logic Implementation

The program follows these steps:

1. **Check for valid argument count**: It first ensures that there is exactly one argument passed (other than the program name). If not, it prints a newline and terminates.
  
2. **Iterate through the string**: The string is iterated character by character:
   - If the character is uppercase, it is converted to lowercase, and an underscore `_` is printed before the character.
   - Otherwise, the character is printed directly.
  
3. **Newline after conversion**: Once the string is processed, a newline is printed to ensure the output format is correct.

### Code:

```c
#include <unistd.h>

void ft_camel_to_snake(char *str)
{
    while (*str)
    {
        if (*str >= 65 && *str <= 90)  // Check if the character is uppercase
        {
            *str = *str + 32;  // Convert uppercase to lowercase
            write(1, "_", 1);  // Print underscore
        }
        write(1, str, 1);  // Print the character (lowercase or original)
        str++;  // Move to the next character
    }
    write(1, "\n", 1);  // Print a newline at the end
}

int main(int argc, char *argv[])
{
    if (argc != 2)  // Check if there is exactly one argument
        return (write(1, "\n", 1));  // Print newline if argument count is not 2
    ft_camel_to_snake(argv[1]);  // Convert and print the string in snake_case
    return (0);  // Exit successfully
}
```

## Explanation of the Code:

### 1. `ft_camel_to_snake` function

This function is responsible for converting the string from lowerCamelCase to snake_case:
- It loops through each character in the string.
- If the character is uppercase, it is converted to lowercase and an underscore (`_`) is printed before it.
- Each character, whether modified or not, is printed as it is processed.
- After the entire string is processed, a newline is printed.

### 2. `main` function

The `main` function checks if the program has been called with exactly one argument. If not, it prints only a newline. If the argument count is correct, it calls the `ft_camel_to_snake` function to perform the conversion and print the result.

## Concepts Covered:

- **String manipulation**: The program demonstrates how to loop through a string, check each character, and modify it if necessary.
  
- **Character ASCII values**: The program uses ASCII value ranges (`65` to `90` for uppercase letters) to identify and convert uppercase letters to lowercase.
  
- **Using `write`**: The `write` function is used for output, as it provides more control over the printing process than `printf`. It’s also one of the allowed functions for this exercise.

- **Flow control**: The program handles input validation by checking the number of arguments passed and reacts accordingly.