# ft_itoa

## Description

The `ft_itoa` function takes an integer as an argument and converts it into a null-terminated string (character array). The function returns the resulting string, which is dynamically allocated using `malloc`. The string represents the integer in base 10, including support for negative numbers.

### Function Prototype:
```c
char *ft_itoa(int nbr);
```

## Detailed Explanation

### Helper Functions

1. **`ft_len(int nbr)`**:
   - This helper function calculates the number of digits required to represent the integer `nbr` in base 10.
   - If `nbr` is `0`, it returns `1` since a single `0` digit is required.
   - The function loops, dividing the number by 10 until it becomes 0, incrementing a counter each time to count the number of digits.
   
   **Example:**
   - For `1234`, `ft_len` will return `4`.

2. **`ft_abs(int nbr)`**:
   - This helper function returns the absolute value of an integer `nbr`.
   - If the number is negative, it returns the positive equivalent. If the number is already positive or zero, it simply returns the number.

   **Example:**
   - For `-5`, `ft_abs` will return `5`.
   - For `5`, it returns `5`.

### `ft_itoa(int nbr)` Function

1. **Calculate the number of digits**:
   - The function first calculates the number of digits required to represent the absolute value of the input integer `nbr` using the helper function `ft_len`.
   - If `nbr` is negative, it will adjust the length of the resulting string to account for the negative sign.

2. **Memory Allocation**:
   - The function allocates memory for the resulting string using `malloc`. The size is `(len + 1)` where `len` is the length of the string (number of digits) and `+1` is for the null terminator `\0`.
   - If the memory allocation fails, it returns `NULL`.

3. **Build the String**:
   - The function starts populating the string from the last digit to the first:
     - It assigns the last character of the string to the character representation of the last digit of `nbr`.
     - It continues by dividing `nbr` by 10 and moving to the next digit until all digits are processed.
   - If the number was negative, it sets the first character to `'-'`.

4. **Null Terminator**:
   - The function ensures that the string is properly null-terminated by placing a `'\0'` at the end of the string.

### Example Usage

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = -12345;
    char *str = ft_itoa(number);
    printf("The string is: %s\n", str);
    free(str);  // Don't forget to free the allocated memory
    return 0;
}
```

**Output:**
```
The string is: -12345
```

### Edge Cases

1. **Zero (`0`)**:
   - If the input integer is `0`, the function will return the string `"0"`.

2. **Negative Numbers**:
   - Negative numbers are handled by prepending the `'-'` sign to the result string.
   - For example, `-123` will return `"-123"`.

3. **Memory Allocation Failure**:
   - If the `malloc` function fails to allocate memory for the result string, the function will return `NULL`.

### Complexity

- **Time Complexity**: O(n), where `n` is the number of digits in the integer. This is because the function processes each digit of the number once.
- **Space Complexity**: O(n), where `n` is the number of digits in the integer. This is because a new string of length `n + 1` (for the null terminator) is created.