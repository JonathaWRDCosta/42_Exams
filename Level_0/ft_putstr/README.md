# Exercise: ft_putstr

## Description

Assignment name  : ft_putstr  
Expected files   : ft_putstr.c  
Allowed functions: write  
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first character.

Your function must be declared as follows:

```c
void	ft_putstr(char *str);
```

### Expected Output Format

- The function should output the string passed as an argument to the standard output, character by character.

---

## Function Prototype

```c
void ft_putstr(char *str);
```

---

## Program Behavior

1. **Function Definition**:
   - The function `ft_putstr` accepts a string (`char *str`) and writes each character of the string to the standard output using the `write` function.

2. **Character Output**:
   - The function should loop through each character of the string and call `write` to output it to the console. The loop continues until the null terminator (`\0`) is encountered, indicating the end of the string.

---

## Pseudo Code

```
START
    INITIALIZE i to 0

    WHILE the character at position i of str is not null ('\0') DO
        WRITE the character at position i of str to standard output
        INCREMENT i
    END WHILE
END
```

---

## Code Explanation

1. **Looping through the string**:
   - The function iterates through the string `str`, starting at index `0` and continues until it encounters the null terminator (`\0`).

2. **Writing characters**:
   - For each character, it calls `write(1, &str[i], 1)` to print the character to the standard output.

3. **Exiting the loop**:
   - The loop stops when the null terminator is reached, as `str[i]` will be equal to `\0` at the end of the string.
