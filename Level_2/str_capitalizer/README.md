# Exercise: str_capitalizer

## Description

The goal of this exercise is to write a program that capitalizes the first character of each word in a given string or series of strings. Each word should be delimited by spaces, tabs, or the start/end of the string. The first letter of each word must be capitalized, and the rest of the characters should be lowercase.

The program should output the modified string(s) followed by a newline (`\n`).

### Rules:
1. A word is a part of the string delimited by spaces, tabs, or the start/end of the string.
2. If the word consists of a single letter, it should be capitalized.
3. If there are no arguments, the program must simply output a newline (`\n`).

---

## Function Prototype

```c
void ft_strcap(char *str);
```

---

## Program Behavior

- If no arguments are provided, print only a newline.
- For each word, capitalize the first letter and make the rest of the letters lowercase.

---

## Code Implementation

Here is the implementation of the `str_capitalizer.c` program:

```c
#include <unistd.h>

void ft_strcap(char *str)
{
    int i;

    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32; // Capitalize the first letter if it's lowercase
    write(1, &str[i], 1);

    while (str[++i])
    {
        // Convert uppercase letters to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        // Capitalize the first letter after a space or tab
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;

        write(1, &str[i], 1);
    }
}

int main(int argc, char *argv[])
{
    int i;

    if (argc < 2)
        return (write(1, "\n", 1)); // If no arguments are provided, print a newline
    else
    {
        i = 1;
        while (i < argc)
        {
            ft_strcap(argv[i]);  // Capitalize and print each argument
            write(1, "\n", 1);    // Print a newline after each argument
            i += 1;
        }
    }
    return (0);
}
```

---

## Explanation of the Code

### `ft_strcap` Function

1. **Initial Capitalization**:
   - The first character of the string is checked. If it's a lowercase letter (`'a'` to `'z'`), it is capitalized by subtracting 32 from its ASCII value (this converts it to the uppercase letter).
   
2. **Loop Through the String**:
   - The program then iterates through the rest of the string.
   - If the current character is an uppercase letter, it is converted to lowercase by adding 32 to its ASCII value.
   - If a letter follows a space (`' '`) or a tab (`'\t'`), it is capitalized by subtracting 32 from its ASCII value.

3. **Output**:
   - Each character (modified or not) is printed using the `write` function.

### `main` Function

1. **Argument Check**:
   - If no arguments are passed, the program outputs a newline (`\n`).
   
2. **Iterate Through Arguments**:
   - If there are arguments, the program loops through each one and applies the `ft_strcap` function to capitalize the words. After each argument, a newline is printed.

---

## Example Usage

### Example 1: No Arguments

**Input:**
```bash
./str_capitalizer
```

**Output:**
```
<newline>
```

### Example 2: Single String with Mixed Case

**Input:**
```bash
./str_capitalizer "a FiRSt LiTTlE TESt"
```

**Output:**
```
A First Little Test
```

### Example 3: Multiple Strings

**Input:**
```bash
./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t"
```

**Output:**
```
__second Test A Little Bit   Moar Complex
   But... This Is Not That Complex
     Okay, This Is The Last 1239809147801 But Not    The Least    T
```

---

## Breakdown of Steps

1. **Check and Handle No Arguments**:
   - If no arguments are passed (`argc < 2`), print just a newline.

2. **Process Each Argument**:
   - For each argument string, process it with `ft_strcap` to capitalize the first letter of each word and convert the rest of the letters to lowercase.

3. **Output**:
   - Print each processed argument followed by a newline.

---

## Compilation and Execution

To compile the program:

```bash
cc -Wall -Wextra -Werror str_capitalizer.c -o str_capitalizer
```

To test the program:

```bash
./str_capitalizer "a FiRSt LiTTlE TESt"
./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX"
```

---

## Summary

The `str_capitalizer` program processes one or more input strings, capitalizes the first letter of each word, and converts the rest of the letters to lowercase. The program ensures proper handling of word boundaries defined by spaces and tabs, and outputs the formatted string(s) followed by a newline.