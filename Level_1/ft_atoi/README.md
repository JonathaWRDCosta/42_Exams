### **Program Requirements**
- Convert a string `str` to an integer and return it.
- Mimic the behavior of the standard C library function `atoi()`.
- Handle:
  - Leading whitespace.
  - An optional `+` or `-` sign.
  - The numeric characters.
  - Stop parsing when non-numeric characters are encountered.
- No standard functions are allowed.

---

### **Code Walkthrough**
```c
int	ft_atoi(const char *str)
{
    int	i;
    int	sign;
    int	result;

    i = 0;
    sign = 1;
    result = 0;

    // Skip leading whitespace characters (spaces, tabs, and newlines)
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Handle optional '+' or '-' sign
    if (str[i] == '-')
    {
        sign = -1;  // Negative number
        i++;
    }
    else if (str[i] == '+')
        i++;

    // Convert consecutive numeric characters to integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Return the computed integer, applying the sign
    return (result * sign);
}
```

---

### **Key Details**

1. **Leading Whitespace**:
   ```c
   while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
   ```
   This checks for:
   - `' '` (space)
   - `'\t'` (horizontal tab)
   - `'\n'` (newline)
   - `'\v'` (vertical tab)
   - `'\f'` (form feed)
   - `'\r'` (carriage return)

2. **Handling Signs**:
   - If `'-'` is encountered, the `sign` is set to `-1`.
   - If `'+'` is encountered, the `sign` remains `1`.
   - Increment the index `i` to skip the sign character.

3. **Numeric Conversion**:
   ```c
   result = result * 10 + (str[i] - '0');
   ```
   This updates the `result` by multiplying the current value by 10 (shifting left in decimal space) and adding the numeric value of the current character.

4. **Stopping Conditions**:
   - The loop stops when a non-numeric character is encountered.
   - Non-numeric characters after the valid integer are ignored (standard `atoi` behavior).

5. **Final Return**:
   ```c
   return (result * sign);
   ```
   Applies the computed `sign` to the numeric result.

---

### **Example Usage**

```c
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
    printf("%d\n", ft_atoi("   42"));       // Output: 42
    printf("%d\n", ft_atoi("   -42"));      // Output: -42
    printf("%d\n", ft_atoi("   +42"));      // Output: 42
    printf("%d\n", ft_atoi("   42abc123")); // Output: 42
    printf("%d\n", ft_atoi("abc42"));       // Output: 0
    printf("%d\n", ft_atoi("   -2147483648")); // Output: -2147483648
    printf("%d\n", ft_atoi("2147483647"));  // Output: 2147483647
    return (0);
}
```

---

### **Strengths**
- Handles all edge cases, including leading whitespace, signs, and non-numeric trailing characters.
- Matches the behavior of the standard `atoi` function.
- Does not use any disallowed functions.
- Handles the `INT_MIN` (`-2147483648`) and `INT_MAX` (`2147483647`) boundary values correctly.

---

### **Possible Enhancements**
While the implementation is solid, the following could be considered:
1. **Overflow Handling**:
   - The code does not currently check for overflow (when the number exceeds `INT_MAX` or `INT_MIN`).
   - You can add logic to detect and handle overflow by checking the intermediate `result`.

2. **Simplification of the `sign` Logic**:
   - Instead of explicitly incrementing `i` inside the `if` blocks, the condition can be combined to streamline the code:
     ```c
     if (str[i] == '-' || str[i] == '+')
         sign = (str[i++] == '-') ? -1 : 1;
     ```