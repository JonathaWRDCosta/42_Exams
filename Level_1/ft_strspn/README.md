# Exercise: ft_strspn

## Description

Assignment name  : ft_strspn  
Expected files   : ft_strspn.c  
Allowed functions: None  

---------------------------------------------------------------

Reproduce the behavior of the `strspn` function (man `strspn`).

The function should be prototyped as follows:

```c
size_t ft_strspn(const char *s, const char *accept);
```

### Function Behavior

The function should return the length of the initial segment of the string `s` that consists entirely of characters from the string `accept`.

- The function scans the string `s` from left to right and returns the number of characters in `s` that are contained in the string `accept` before a character not found in `accept` is encountered.
- The function should stop once a character in `s` is not found in `accept` and return the number of characters before that point.

### Example:

```bash
$> ./ft_strspn "abcdef" "abc" 
3
$> ./ft_strspn "hello" "h" 
1
$> ./ft_strspn "abcdef" "xyz" 
0
$> ./ft_strspn "abcdef" "abcxyz" 
6
```

---

## Function Prototype

```c
size_t ft_strspn(const char *s, const char *accept);
```

---

## Program Behavior

1. **Input String**:
   - The function takes two arguments: `s` (the string to be checked) and `accept` (the string containing acceptable characters).
   
2. **Checking Characters**:
   - The function iterates through each character in `s` and checks if it is found in `accept`.
   - If a character from `s` is found in `accept`, the count is increased.
   - If a character from `s` is not found in `accept`, the function returns the current count.
   
3. **Return the Count**:
   - The function returns the number of characters in the initial part of `s` that are also present in `accept`.

---

## Pseudo Code

```
START
    Initialize count to 0
    Iterate through each character in s:
        For each character in s, check if it exists in accept
        If the character is found in accept, increase count
        If the character is not found in accept, return the current count
    Return count
END
```

---

## Code Explanation

1. **Initialization**:
   - The `count` variable is initialized to 0 and is used to track the length of the matching characters.
   
2. **Looping Through the String**:
   - The outer loop iterates through each character in `s`.
   - For each character in `s`, the inner loop checks if it exists in `accept`. If it does, the count is increased.
   - Once a character in `s` is not found in `accept`, the function exits and returns the `count`.
   
3. **Returning the Count**:
   - After all matching characters are counted, the function returns the total length of the matched initial segment.

---

Let me know if you need further adjustments or clarifications!