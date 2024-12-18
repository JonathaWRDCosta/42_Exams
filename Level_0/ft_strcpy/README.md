# Exercise: ft_strcpy

## Description

Assignment name  : ft_strcpy  
Expected files   : ft_strcpy.c  
Allowed functions: None  

--------------------------------------------------------------------------------

Reproduce the behavior of the function `strcpy` (man strcpy).

Your function must be declared as follows:

```c
char    *ft_strcpy(char *s1, char *s2);
```

### Expected Output Format

- The function should copy the string from `s2` to `s1`, and return the pointer `s1`.
- The string in `s2` should be copied, including the null terminator (`\0`), so `s1` will be a copy of `s2`.

---

## Function Prototype

```c
char *ft_strcpy(char *s1, char *s2);
```

---

## Program Behavior

1. **Function Definition**:
   - The function `ft_strcpy` takes two parameters: `s1` and `s2`. It copies the string `s2` into `s1` and returns `s1`.

2. **Copying the String**:
   - The function uses a loop to copy each character from `s2` to `s1`, starting from the first character and continuing until the null terminator (`\0`) is reached in `s2`.

3. **Adding Null Terminator**:
   - After the loop, the null terminator (`\0`) is added to the end of the string in `s1` to properly terminate it.

4. **Returning `s1`**:
   - After the string copy is complete, the pointer to `s1` is returned.

---

## Pseudo Code

```
START
    INITIALIZE i to 0

    WHILE the character at position i of s2 is not null ('\0') DO
        COPY the character at position i of s2 into position i of s1
        INCREMENT i
    END WHILE

    ADD null terminator ('\0') to position i of s1
    RETURN s1
END
```

---

## Code Explanation

1. **Loop through `s2`**:
   - The loop iterates through the string `s2` until it encounters the null terminator (`\0`).
   
2. **Copying characters**:
   - Inside the loop, each character from `s2[i]` is copied to `s1[i]`.

3. **Null Terminator**:
   - Once the loop ends, the null terminator (`\0`) is added to `s1[i]` to mark the end of the string.

4. **Return `s1`**:
   - Finally, the function returns the pointer `s1`, which now contains the copied string.
