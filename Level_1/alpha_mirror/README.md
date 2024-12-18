# Exercise: alpha_mirror

## Description

Assignment name  : alpha_mirror  
Expected files   : alpha_mirror.c  
Allowed functions: write  

--------------------------------------------------------------------------------

Write a program called `alpha_mirror` that takes a string and displays this string after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.

- 'a' becomes 'z', 'Z' becomes 'A'
- 'd' becomes 'w', 'M' becomes 'N'
- and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

### Examples:

```bash
$> ./alpha_mirror "abc"
zyx

$> ./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$

$> ./alpha_mirror | cat -e
$
```

### Expected Output Format

- The program replaces each alphabetical character with its opposite (e.g., 'a' becomes 'z', 'A' becomes 'Z').
- The program does not alter non-alphabetical characters.
- The program outputs the modified string followed by a newline (`\n`).
- If the number of arguments is not 1, it simply prints a newline (`\n`).

---

## Function Prototype

```c
int main(int argc, char *argv[]);
```

---

## Program Behavior

1. **Argument Handling**:
   - The program first checks if exactly one argument is provided. If the number of arguments is not 1, it prints a newline and exits.

2. **Alpha Mirror Conversion**:
   - The program processes each character in the string:
     - If the character is a lowercase letter (from 'a' to 'z'), it is converted to its opposite letter in the alphabet. For example, 'a' becomes 'z', 'b' becomes 'y', and so on.
     - If the character is an uppercase letter (from 'A' to 'Z'), it is similarly converted to its opposite letter in the alphabet.
     - Non-alphabetical characters are left unchanged.

3. **Output**:
   - The program prints the modified string followed by a newline using the `write` function.

---

## Pseudo Code

```
START
    IF the number of arguments (argc) is NOT 2 THEN
        PRINT a newline
        EXIT the program
    END IF

    FOR each character in the string (argv[1]) DO
        IF the character is a lowercase letter between 'a' and 'z' THEN
            REPLACE the character with its opposite (e.g., 'a' becomes 'z')
        ELSE IF the character is an uppercase letter between 'A' and 'Z' THEN
            REPLACE the character with its opposite (e.g., 'A' becomes 'Z')
        ELSE
            PRINT the character as is (for non-alphabetic characters)
        END IF
    END FOR

    PRINT a newline
END
```

---

## Code Explanation

1. **Argument Check**:
   - The program checks if exactly one argument is passed. If there are not exactly 2 arguments (the program name and the string), it prints a newline and exits.

2. **Alpha Mirror Conversion**:
   - The program iterates through each character in the string:
     - For lowercase letters, it calculates the opposite character by subtracting the character from the sum of 'a' and 'z'.
     - For uppercase letters, it calculates the opposite character by subtracting the character from the sum of 'A' and 'Z'.
     - Non-alphabetic characters are left unchanged.

3. **Output**:
   - The `write` function is used to output the modified string followed by a newline at the end.
