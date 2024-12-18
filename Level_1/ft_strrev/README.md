# Exercise: ft_strrev

## Description

Assignment name  : ft_strrev  
Expected files   : ft_strrev.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that reverses a string in place. The function should return the same string after it has been reversed.

The function must be declared as follows:

```c
char *ft_strrev(char *str);
```

### Function Behavior

The function should reverse the string provided as the argument and return a pointer to the reversed string.

- The reversal should be done in place (i.e., without using additional memory).
- The function should not return a new string but rather modify the input string directly.

### Example:

```bash
$> ./ft_strrev "hello" | cat -e
olleh$
$> ./ft_strrev "world" | cat -e
dlrow$
$> ./ft_strrev "abc123" | cat -e
321cba$
```

---

## Function Prototype

```c
char *ft_strrev(char *str);
```

---

## Program Behavior

1. **Input String**:
   - The function takes a string `str` and modifies it in place by reversing its characters.

2. **Reversing the String**:
   - The function calculates the length of the string.
   - It then uses a loop to swap characters from the beginning of the string with those at the end, moving towards the middle.
   - This is done until all characters have been swapped.

3. **Returning the Reversed String**:
   - After the string is reversed, the function returns the pointer to the modified string.

---

## Pseudo Code

```
START
    Calculate the length of the string
    Initialize two indices: one starting at the beginning, and one at the end
    While the first index is less than the second index:
        Swap the characters at both indices
    Return the modified string
END
```

---

## Code Explanation

1. **Calculating the Length**:
   - The function calculates the length of the string by iterating through it until it reaches the null terminator (`\0`).

2. **Reversing the String**:
   - The function uses two indices: one (`i`) starting at the beginning of the string and the other (`length - 1 - i`) starting at the end.
   - It swaps the characters at both indices and continues this process, moving the indices towards the center, until they meet in the middle.

3. **Returning the String**:
   - Once the string has been reversed in place, the function returns the modified string.
