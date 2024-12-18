# Exercise: ft_strpbrk

## Description

Assignment name  : ft_strpbrk  
Expected files   : ft_strpbrk.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that replicates the behavior of the `strpbrk` function (man `strpbrk`).

The function must be declared as follows:

```c
char *ft_strpbrk(const char *s1, const char *s2);
```

### Function Behavior

The `ft_strpbrk` function searches the string `s1` for the first occurrence of any character in `s2`. It returns a pointer to the character in `s1` where the match is found, or `NULL` if no match is found.

- If either `s1` or `s2` is `NULL`, the function should return `NULL`.
- If no character in `s1` matches any character in `s2`, the function returns `NULL`.
- The returned pointer should point to the first character in `s1` that matches any character in `s2`.

### Example:

```bash
$> ./ft_strpbrk "hello" "aeiou" | cat -e
e$
$> ./ft_strpbrk "hello" "xyz" | cat -e
$
$> ./ft_strpbrk "abcd" "z" | cat -e
$
$> ./ft_strpbrk "" "aeiou" | cat -e
$
```

---

## Function Prototype

```c
char *ft_strpbrk(const char *s1, const char *s2);
```

---

## Program Behavior

1. **Input Validation**:
   - The function checks if either `s1` or `s2` is `NULL`. If so, it immediately returns `NULL`.

2. **Searching for Characters**:
   - The function iterates over each character of `s1`.
   - For each character in `s1`, it checks if it exists in `s2` by iterating through all characters of `s2`.

3. **Return**:
   - If a character from `s1` matches any character in `s2`, the function returns a pointer to that character in `s1`.
   - If no characters in `s1` match any in `s2`, it returns `NULL`.

---

## Pseudo Code

```
START
    If s1 or s2 is NULL, return NULL
    While s1 is not NULL and not reached the end
        For each character in s2
            If character in s1 matches a character in s2
                Return pointer to character in s1
    Return NULL if no match is found
END
```

---

## Code Explanation

1. **Input Validation**:
   - Before doing any operations, the function first checks if either `s1` or `s2` is `NULL`. If either is `NULL`, the function returns `NULL`.

2. **Looping Through `s1`**:
   - The function iterates over each character of the string `s1` using a `while` loop. For each character in `s1`, it checks if it matches any character in `s2`.

3. **Inner Loop**:
   - For each character in `s1`, the function iterates over all characters of `s2` with another `while` loop. If a match is found, it returns the pointer to the matching character in `s1`.

4. **No Match Found**:
   - If no match is found after checking all characters in `s1`, the function returns `NULL`.
