# Exercise: rev_print

## Description

The task is to write a program in C that takes a string as an argument and prints it in reverse, followed by a newline. If the number of parameters is not equal to 1, the program should print only a newline.

## Requirements

- **File**: `rev_print.c`
- **Allowed function**: `write`

### Expected behavior:

1. The program should display the string in reverse.
2. If the number of parameters passed is not 1, the program should print only a newline.
3. Otherwise, it prints the reversed string.

### Examples:

- Input: `./rev_print "zaz"`
  
  Output:  
  ```
  zaz
  ```

- Input: `./rev_print "dub0 a POIL"`
  
  Output:
  ```
  LIOP a 0bud
  ```

- Input: `./rev_print`
  
  Output:
  ```
  (only a newline)
  ```

## Solution

The solution involves two main steps:

### 1. Checking the number of arguments

First, the program checks if the number of arguments is exactly 2 (the program name and the string to reverse). If not, it prints just a newline.

### 2. Reversing the String

If the correct number of parameters is provided (exactly one argument besides the program name), the program proceeds to reverse the string. The steps are:

- The length of the string is first calculated using a `while` loop that counts until the null character (`\0`) is found.
  
- Then, the string is printed in reverse order by accessing each character from the end to the beginning using a `while` loop and the `write` function.

### 3. Printing the Result

After printing the reversed string, a newline is added to ensure the output format is correct.

### Code:

```c
#include <unistd.h>

char *ft_rev_print(char *str)
{
    int i = 0;

    // Calculate the length of the string
    while (str[i])
        i++;

    // Print the string in reverse order
    while (i-- > 0)
    {
        write(1, &str[i], 1);
    }

    // Print a newline after the reversed string
    write(1, "\n", 1);
    return (str);
}

int main(int argc, char *argv[])
{
    char *str;

    // Check if the number of arguments is 2
    if (argc != 2)
        return (write(1, "\n", 1));

    // Call the function to reverse and print the string
    str = ft_rev_print(argv[1]);

    return (*str);
}
```

## Explanation of the Code:

### 1. `ft_rev_print` function

This function is responsible for reversing the string. It takes the string as an argument, calculates its length, and then prints the characters in reverse order using the `write` function.

### 2. `main` function

The `main` function checks if the number of arguments provided is 2. If not, it simply prints a newline. If there are exactly 2 arguments, it calls the `ft_rev_print` function to reverse and print the string.

## Concepts covered:

- **String manipulation**: We learned how to loop through a string in C, calculate its length, and access its characters individually.
  
- **`write` function**: We used the `write` function, which is a lower-level way of printing characters in C, instead of using standard library functions like `printf`. It gives more control over output, as it's one of the allowed functions in the exercise.
  
- **Flow control**: The exercise also involves basic flow control to ensure the number of parameters is correct for executing the desired functionality; otherwise, the program simply prints a newline.