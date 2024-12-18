# Exercise: ft_strlen

## Description

The goal is to write a function that returns the length of a given string. The function must count the number of characters in the string until it reaches the null-terminator `'\0'`, which signifies the end of the string.

### Requirements:
- The function must follow this prototype:
  ```c
  int ft_strlen(char *str);
  ```
- You are **not allowed** to use any external libraries or functions.

---

## Code

Here is the implementation:

```c
int ft_strlen(char *str)
{
    int i;

    i = 0;  // Initialize a counter to 0
    while (str[i] != '\0')  // Loop until the null-terminator is encountered
    {
        i++;  // Increment the counter for each character
    }
    return (i);  // Return the total count
}
```

---

## How It Works

1. **Initialization**:  
   We start with an integer variable `i` initialized to `0`. This variable will be used to count the characters in the string.

2. **Loop through the string**:  
   Using a `while` loop, we iterate through each character of the string until we encounter the null-terminator `'\0'`, which marks the end of the string.

3. **Counting characters**:  
   On each iteration, we increment the counter `i`.

4. **Return the result**:  
   Once the loop finishes, the total count stored in `i` is returned as the length of the string.

---

## Example Usage

Here's an example demonstrating how the `ft_strlen` function works:

```c
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *str1 = "Hello, World!";
    char *str2 = "";
    char *str3 = "42 Porto";

    printf("Length of '%s': %d\n", str1, ft_strlen(str1)); // Output: 13
    printf("Length of '%s': %d\n", str2, ft_strlen(str2)); // Output: 0
    printf("Length of '%s': %d\n", str3, ft_strlen(str3)); // Output: 8

    return 0;
}
```

### Output:
```
Length of 'Hello, World!': 13
Length of '': 0
Length of '42 Porto': 8
```

---

## Key Concepts

- **Strings in C**:  
  Strings in C are arrays of characters terminated by a special character `'\0'` (null-terminator). The function uses this character to determine where the string ends.

- **Counting using a loop**:  
  By looping through each character and incrementing a counter, we determine the total number of characters before the null-terminator.

- **Return values**:  
  The function returns an integer representing the length of the string.

---

## Edge Cases

1. **Empty string**:  
   If the input string is empty (`""`), the function immediately encounters the null-terminator, and `0` is returned.

2. **Regular strings**:  
   Strings with letters, numbers, spaces, or symbols are properly counted until `'\0'`.

3. **Strings with spaces**:  
   Spaces are treated as valid characters and included in the length count.

---

## Why It Works

This function works efficiently because:
- It iterates through the string **once**, making it an **O(n)** operation, where `n` is the length of the string.
- It stops as soon as it reaches the null-terminator, ensuring no unnecessary operations are performed.

---

## Function Prototype

```c
int ft_strlen(char *str);
```

- **Input**: A pointer to a string (`char *str`).  
- **Output**: The length of the string as an integer (`int`).  