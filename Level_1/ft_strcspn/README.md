# Exercise: ft_strcspn

## Description

Assignment name  : ft_strcspn  
Expected files   : ft_strcspn.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that replicates the behavior of the `strcspn` function (man `strcspn`).

The function must be declared as follows:

```c
size_t ft_strcspn(const char *s, const char *reject);
```

### Function Behavior

The `ft_strcspn` function should return the length of the initial segment of the string `s` which does not contain any of the characters from the string `reject`. The function stops as soon as one of the characters in `reject` is found in `s`.

- If no characters from `reject` are found in `s`, the function should return the length of `s`.
- If any character from `reject` is found, the function should return the index of the first occurrence.

### Examples:

```bash
$> ./ft_strcspn "hello" "aeiou"
1

$> ./ft_strcspn "abcdef" "xyz"
6

$> ./ft_strcspn "abc123" "123"
3

$> ./ft_strcspn "example" "z"
7
```

---

## Function Prototype

```c
size_t ft_strcspn(const char *s, const char *reject);
```

---

## Program Behavior

1. **String Traversal**:
   - The function iterates through each character in the string `s`.
   
2. **Character Matching**:
   - For each character in `s`, it checks if it matches any character from the string `reject`.
   
3. **Return Value**:
   - The function returns the number of characters from `s` before encountering a character from `reject`.
   - If no such character is found, it returns the length of `s`.

---

## Pseudo Code

```
START
    Initialize count = 0
    Initialize i = 0

    While s is not the null character
        While reject[i] is not the null character and s is not equal to reject[i]
            Increment i
        If reject[i] is not the null character
            Return count

        Reset i = 0
        Increment count
        Move to the next character in s

    Return count
END
```

---

## Code Explanation

1. **Iterating through the String**:
   - The outer `while` loop traverses each character of the string `s`.

2. **Character Comparison**:
   - The inner `while` loop checks if the current character in `s` is found in `reject`.
   - If a match is found, the function returns the current count, indicating how many characters from `s` were checked before encountering a character from `reject`.

3. **Count Update**:
   - If no match is found in `reject`, the character is counted and the loop continues with the next character in `s`.

4. **Final Return**:
   - If no matching characters are found, the length of `s` is returned.
