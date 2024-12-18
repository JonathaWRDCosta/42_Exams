# Exercise: ft_strcmp

## Description

Assignment name  : ft_strcmp  
Expected files   : ft_strcmp.c  
Allowed functions: None  

--------------------------------------------------------------------------------

Write a function that compares two strings (`s1` and `s2`) and returns an integer that indicates their lexicographical difference, mimicking the behavior of the standard `strcmp` function.

Your function must be declared as follows:

```c
int ft_strcmp(char *s1, char *s2);
```

### Function Behavior

The function should compare two strings, character by character:

- If the strings are equal, return `0`.
- If the first string (`s1`) is lexicographically smaller than the second string (`s2`), return a negative integer.
- If the first string (`s1`) is lexicographically larger than the second string (`s2`), return a positive integer.

The comparison stops when either:
1. A difference is found between the corresponding characters.
2. The end of one or both strings is reached.

### Examples:

```bash
$> ./ft_strcmp "hello" "hello"
0

$> ./ft_strcmp "apple" "banana"
-1

$> ./ft_strcmp "apple" "apple pie"
-32

$> ./ft_strcmp "apple pie" "apple"
32

$> ./ft_strcmp "abc" "abd"
-1
```

---

## Function Prototype

```c
int ft_strcmp(char *s1, char *s2);
```

---

## Program Behavior

1. **String Comparison**:
   - The function compares characters from both strings `s1` and `s2` one by one, until it finds a difference or reaches the end of either string.

2. **Lexicographical Ordering**:
   - The result is computed by subtracting the ASCII values of the characters at the current position in both strings. This is done as long as the characters are equal.

3. **Return Value**:
   - If the characters differ, the difference in their ASCII values is returned.
   - If both strings are equal up to the null terminator, `0` is returned.

---

## Pseudo Code

```
START
    Initialize i = 0

    While s1[i] is not the null character and s1[i] is equal to s2[i]
        Increment i

    Return the difference of s1[i] and s2[i]
END
```

---

## Code Explanation

1. **Character Comparison**:
   - The function compares each character from `s1` and `s2` one by one using a `while` loop. If they are equal, the loop continues to the next character.

2. **Returning the Difference**:
   - Once a difference is found, the function returns the result of subtracting the ASCII values of the current characters from `s1` and `s2`.

3. **End of Strings**:
   - If no difference is found and the end of both strings is reached, `0` is returned, indicating the strings are identical.
