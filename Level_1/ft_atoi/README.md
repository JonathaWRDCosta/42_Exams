# Exercise: ft_atoi

## Description

Assignment name  : ft_atoi  
Expected files   : ft_atoi.c  
Allowed functions: None  

--------------------------------------------------------------------------------

Write a function that converts a string (`str`) to an integer (`int`) and returns it.

The function should behave similarly to the standard `atoi` function, which is used to convert a string to an integer, as described in the man page for `atoi`.

Your function must be declared as follows:

```c
int ft_atoi(const char *str);
```

### Function Behavior

- The function should handle optional leading spaces or tab characters.
- The function should handle an optional leading `+` or `-` sign.
- The function should stop converting as soon as a non-numeric character is encountered (i.e., it should ignore characters after a number).
- The function should return the integer equivalent of the string.

### Examples:

```bash
$> ./ft_atoi "12345"
12345

$> ./ft_atoi " -42"
-42

$> ./ft_atoi "  +42  "
42

$> ./ft_atoi "123abc"
123

$> ./ft_atoi "  -99999  "
-99999
```

---

## Function Prototype

```c
int ft_atoi(const char *str);
```

---

## Program Behavior

1. **Skipping Leading Whitespaces**:
   - The function begins by skipping any leading spaces or control characters (such as tab or newline) using a `while` loop.

2. **Handling Signs**:
   - If the next character is a `-`, the function sets a `sign` variable to `-1`. If it is a `+`, the function continues without changing the sign. The sign is used to determine whether the result should be positive or negative.

3. **Converting Digits**:
   - The function then enters a `while` loop to process digits. For each digit, it multiplies the current result by 10 (shifting the result by one decimal place) and adds the integer value of the digit (by subtracting `'0'` from the character).

4. **Returning the Result**:
   - Once the string has been fully processed, the function returns the result, adjusting for the sign (`sign * result`).

---

## Pseudo Code

```
START
    Initialize i = 0, sign = 1, result = 0
    
    While the character at str[i] is a space or control character
        Increment i
    
    If the character at str[i] is a '-' then
        Set sign to -1 and increment i
    Else if the character at str[i] is a '+' then
        Increment i

    While the character at str[i] is a digit
        Multiply result by 10 and add the numeric value of str[i]
        Increment i

    Return result * sign
END
```

---

## Code Explanation

1. **Whitespace Handling**:
   - The program skips over leading spaces or tab characters using a `while` loop to ensure the conversion begins from the first non-whitespace character.

2. **Sign Handling**:
   - The `sign` variable is used to track whether the final result should be positive or negative based on the presence of a `+` or `-` sign at the beginning of the string.

3. **Integer Conversion**:
   - Each character representing a digit is converted to its integer value by subtracting the ASCII value of `'0'`. This value is then added to the result, with the previous result being multiplied by 10 to shift the digits left by one place.

4. **Final Return**:
   - Once the numeric conversion is complete, the function returns the result, applying the sign to determine whether the number should be negative or positive.
