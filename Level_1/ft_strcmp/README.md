# Exercise: ft_strcmp

## Description

The task is to reproduce the behavior of the standard C function `strcmp` (manual: `man strcmp`). This function compares two strings, character by character, and returns an integer value based on the comparison.

### Requirements:
- You must implement the function as follows:
  ```c
  int ft_strcmp(char *s1, char *s2);
  ```
- **Allowed functions**: None (do not use external libraries or functions).

---

## Function Behavior

- `strcmp` compares two strings (`s1` and `s2`) lexicographically.
- It checks characters one by one:
  - If characters at the same position are equal, it continues to the next character.
  - The comparison stops when:
    - A difference between characters is found.
    - The end of one of the strings (`'\0'`) is reached.
- The function returns:
  - A **negative value** if `s1` is lexicographically less than `s2`.
  - **Zero** if `s1` is equal to `s2`.
  - A **positive value** if `s1` is lexicographically greater than `s2`.

---

## Code Implementation

Here is the implementation of `ft_strcmp`:

```c
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;  // Initialize index to 0
    while (s1[i] != '\0' && s1[i] == s2[i])  // Loop while characters are equal
    {
        i++;  // Move to the next character
    }
    return (s1[i] - s2[i]);  // Return the difference of the first non-matching characters
}
```

---

## How It Works

1. **Initialization**:  
   A variable `i` is initialized to `0`. This will serve as an index to traverse both strings.

2. **Character Comparison**:  
   - A `while` loop runs as long as:
     - The characters at position `i` in `s1` and `s2` are equal.
     - Neither `s1` nor `s2` have reached their null-terminator (`'\0'`).
   - If the characters are equal, the loop increments `i` to check the next characters.

3. **Stopping Condition**:  
   The loop stops when a difference is found or when one of the strings ends.

4. **Returning the Result**:  
   The return value is the difference between the first differing characters:
   - `s1[i] - s2[i]`.

---

## Example Usage

Here is an example program to demonstrate `ft_strcmp`:

```c
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    printf("Comparison of 'hello' and 'hello': %d\n", ft_strcmp("hello", "hello"));
    printf("Comparison of 'apple' and 'apricot': %d\n", ft_strcmp("apple", "apricot"));
    printf("Comparison of 'banana' and 'apple': %d\n", ft_strcmp("banana", "apple"));
    printf("Comparison of 'test' and 'testing': %d\n", ft_strcmp("test", "testing"));
    printf("Comparison of '' and 'empty': %d\n", ft_strcmp("", "empty"));
    return (0);
}
```

### Output:
```
Comparison of 'hello' and 'hello': 0
Comparison of 'apple' and 'apricot': -15
Comparison of 'banana' and 'apple': 1
Comparison of 'test' and 'testing': -105
Comparison of '' and 'empty': -101
```

---

## Key Concepts

1. **Lexicographical Comparison**:  
   The strings are compared character by character based on their ASCII values:
   - If two characters are equal, the comparison continues.
   - The difference between the characters is returned if they are not equal.

2. **Null-Terminated Strings**:  
   Strings in C are arrays of characters terminated by `'\0'`. The function checks for this null-terminator to know when the string ends.

3. **Return Values**:  
   - **Negative Value**: `s1` is "smaller" than `s2` (earlier in lexicographical order).
   - **Zero**: The strings are identical.
   - **Positive Value**: `s1` is "greater" than `s2` (later in lexicographical order).

---

## Edge Cases

1. **Identical Strings**:  
   If the two strings are identical, the function will return `0`.

2. **Different Length Strings**:  
   If one string is shorter, the function will detect the difference when it reaches the null-terminator of the shorter string.

3. **Empty Strings**:  
   - Comparing an empty string (`""`) with a non-empty string will return a negative value.

4. **Strings with the Same Prefix**:  
   If the strings have a common prefix but differ later, the function will return the difference of the first non-matching characters.

---

## Example Analysis

Given two strings:

- `"apple"` and `"apricot"`:
  - The function compares character by character:
    - `'a'` == `'a'`
    - `'p'` == `'p'`
    - `'p'` == `'p'`
    - `'l'` != `'r'`
  - It stops at `'l'` and `'r'` and returns their difference: `'l' - 'r'` → `-15`.

- `"test"` and `"testing"`:
  - It compares the first four characters (`'t'`, `'e'`, `'s'`, `'t'`), which are equal.
  - It then stops when it encounters the null-terminator in `"test"` and the `'i'` in `"testing"`, returning `'\0' - 'i'` → `-105`.

---

## Function Prototype

```c
int ft_strcmp(char *s1, char *s2);
```

- **Input**: Two strings (`char *s1` and `char *s2`).  
- **Output**: An integer indicating the result of the comparison.  