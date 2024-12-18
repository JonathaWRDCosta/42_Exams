# Exercise: ft_strdup

## Description

Assignment name  : ft_strdup  
Expected files   : ft_strdup.c  
Allowed functions: malloc  

---------------------------------------------------------------

Write a function that replicates the behavior of the `strdup` function (man `strdup`).

The function must be declared as follows:

```c
char *ft_strdup(char *src);
```

### Function Behavior

The `ft_strdup` function creates a copy of the string `src` in memory and returns a pointer to the newly allocated string.

- The new string must be allocated dynamically using `malloc`.
- The returned string must contain the same characters as `src`, including the null-terminator `\0`.
- If the memory allocation fails, the function should return `NULL`.

### Example:

```bash
$> ./ft_strdup "Hello" | cat -e
Hello$
$> ./ft_strdup "12345" | cat -e
12345$
$> ./ft_strdup "" | cat -e
$
```

---

## Function Prototype

```c
char *ft_strdup(char *src);
```

---

## Program Behavior

1. **Memory Allocation**:
   - The function first determines the length of the string `src` to allocate enough memory for the new string. This includes the null-terminator (`\0`).

2. **Copying the String**:
   - The function copies each character from the source string `src` to the newly allocated memory.

3. **Return Value**:
   - The function returns a pointer to the newly created string, or `NULL` if memory allocation fails.

---

## Pseudo Code

```
START
    Initialize i = 0
    Initialize length = 0

    While src[length] is not the null character
        Increment length

    Allocate memory for strcpy with size (length + 1)
    If allocation fails, return NULL

    While src[i] is not the null character
        Copy src[i] to strcpy[i]
        Increment i

    Set strcpy[i] to '\0' (null-terminator)

    Return strcpy
END
```

---

## Code Explanation

1. **Determining String Length**:
   - A `while` loop counts the length of `src` by iterating through each character until the null-terminator is encountered.

2. **Memory Allocation**:
   - `malloc` is used to allocate memory for the new string (`strcpy`), with enough space to hold all the characters of `src` plus the null-terminator.

3. **Copying the String**:
   - Another `while` loop copies each character from `src` to the newly allocated memory (`strcpy`).

4. **Null-Terminator**:
   - After the last character is copied, the null-terminator (`\0`) is added to the end of `strcpy` to make it a valid C string.

5. **Return**:
   - The function returns the pointer to the newly created string.
