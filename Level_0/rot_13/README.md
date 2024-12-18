# Exercise: rot_13

## Description

Assignment name  : rot_13  
Expected files   : rot_13.c  
Allowed functions: write  

--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its letters by the letter 13 spaces ahead in alphabetical order.

- 'z' becomes 'm' and 'Z' becomes 'M'.
- Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

### Examples:

```bash
$> ./rot_13 "abc"
nop

$> ./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$

$> ./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $

$> ./rot_13 | cat -e
$

$> ./rot_13 "" | cat -e
$
```

### Expected Output Format

- The string is displayed with each letter replaced by the letter 13 positions ahead in the alphabet.
- Non-alphabetic characters remain unchanged.
- If no valid input is provided, the program simply outputs a newline.

---

## Function Prototype

```c
int main(int argc, char **argv);
```

---

## Program Behavior

1. **Argument Handling**:
   - The program checks if exactly one argument is provided.
   - If the number of arguments is not 1, the program outputs a newline.

2. **ROT13 Transformation**:
   - The program iterates through each character of the input string.
   - If the character is a lowercase letter ('a' to 'z'), it shifts the character 13 positions forward in the alphabet.
   - If the character is an uppercase letter ('A' to 'Z'), it shifts the character 13 positions forward in the alphabet as well.
   - Non-alphabetical characters (spaces, punctuation, etc.) are not changed.

3. **Output**:
   - After processing each character, the modified character is written to standard output.
   - The output is followed by a newline character.

---

## Pseudo Code

```
START
    IF the number of arguments (argc) is NOT 2 THEN
        PRINT a newline
        EXIT the program
    END IF

    FOR each character in the string (argv[1]) DO
        IF the character is a lowercase letter THEN
            APPLY ROT13 to the character
        ELSE IF the character is an uppercase letter THEN
            APPLY ROT13 to the character
        END IF
        PRINT the transformed character
    END FOR

    PRINT a newline
END
```

---

## Code Explanation

1. **Argument Check**:
   - The program first checks if exactly one argument is passed. If there is no argument or more than one, a newline is printed.

2. **ROT13 Transformation**:
   - If the character is a lowercase letter, the program shifts it by 13 positions using the formula:
     ```c
     argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
     ```
   - Similarly, for uppercase letters, the program applies the same transformation:
     ```c
     argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
     ```
   - Non-alphabetic characters (like spaces or punctuation) remain unaffected.

3. **Writing to Output**:
   - Each character is written to the output using the `write` function, followed by a newline at the end.