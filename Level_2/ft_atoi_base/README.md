# Exercise: ft_atoi_base

## Description

Assignment name  : ft_atoi_base  
Expected files   : ft_atoi_base.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that converts a string argument `str` (in base N, where N ≤ 16) to an integer (in base 10) and returns the result.

The characters recognized in the input are: `0123456789abcdef`, and the characters are case-insensitive. Uppercase letters should also be recognized. For example, `12fdb3` is the same as `12FDB3`.

A minus sign (`-`) is interpreted only if it is the first character of the string.

Your function must be declared as follows:

```c
int ft_atoi_base(const char *str, int str_base);
```

### Constraints:
- `str_base` must be between 2 and 16, inclusive.
- The function should return 0 if the base is invalid or if the input string is `NULL`.

### Examples:

For the input:

```c
ft_atoi_base("1010", 2);
```

The output should be:

```c
10  // Binary "1010" equals decimal 10.
```

For the input:

```c
ft_atoi_base("12F", 16);
```

The output should be:

```c
303  // Hexadecimal "12F" equals decimal 303.
```

For the input:

```c
ft_atoi_base("-123", 10);
```

The output should be:

```c
-123  // Decimal "-123".
```

For the input:

```c
ft_atoi_base("100", 8);
```

The output should be:

```c
64  // Octal "100" equals decimal 64.
```

---

## Function Behavior

1. **Input**:
   - The function takes two arguments: a string (`str`) representing the number in the specified base (`str_base`), and the base itself (`str_base`), which should be between 2 and 16.

2. **Sign Handling**:
   - The function handles the optional minus sign (`-`) at the start of the string to indicate a negative number.

3. **Character Mapping**:
   - The function converts each character from the string to its corresponding value based on the specified base, considering characters `0-9` and `a-f` (case-insensitive).

4. **Return Value**:
   - The function returns the integer representation of the number in base 10, properly accounting for the sign of the number.

---

## Pseudo Code

```
START
    If str is NULL or str_base is less than 2 or greater than 16:
        Return 0

    Initialize result = 0, sign = 1

    If the first character is a minus sign:
        Set sign to -1 and move to the next character

    For each character in the string:
        Convert the character to its corresponding digit based on str_base
        If the character is invalid, break the loop
        Update result = result * str_base + digit

    Return result multiplied by sign
END
```

---

## Code Explanation

1. **to_lower Function**:
   - The `to_lower` function ensures that uppercase letters are treated the same as lowercase letters. It converts any uppercase character to its lowercase equivalent.

2. **get_digit Function**:
   - The `get_digit` function maps characters (`0-9`, `a-f`) to their respective numeric values. It checks if the character is within the valid range for the specified base and returns the corresponding digit or `-1` if the character is invalid.

3. **Main Conversion Logic**:
   - The `ft_atoi_base` function processes the input string by iterating through each character. It accumulates the result by multiplying the current result by the base and adding the current digit. If the character is invalid for the specified base, the loop breaks.

4. **Sign Handling**:
   - The function handles negative numbers by checking if the string starts with a `-`. If it does, the sign is set to `-1` and the conversion continues with the next character.
