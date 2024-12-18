# Exercise: rotone

## Description

Assignment name  : rotone  
Expected files   : rotone.c  
Allowed functions: write  

--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its letters by the next one in alphabetical order.

- 'z' becomes 'a' and 'Z' becomes 'A'.
- Case remains unaffected.

The output will be followed by a newline (`\n`).

If the number of arguments is not 1, the program displays a newline.

### Examples:

```bash
$> ./rotone "abc"
bcd

$> ./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$

$> ./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $

$> ./rotone | cat -e
$

$> ./rotone "" | cat -e
$
```

### Expected Output Format

- Each letter in the string is replaced by the next letter in the alphabet (e.g., 'a' becomes 'b', 'z' becomes 'a').
- Non-alphabetic characters (spaces, punctuation, etc.) remain unchanged.
- The program prints a newline (`\n`) at the end.

---

## Function Prototype

```c
int main(int argc, char **argv);
void rotone(char *s);
```

---

## Program Behavior

1. **Argument Handling**:
   - The program checks if exactly one argument is provided.
   - If the number of arguments is not 1, the program simply outputs a newline.

2. **ROTONE Transformation**:
   - The program processes each character in the string passed as the argument.
   - If the character is a lowercase letter (from 'a' to 'y'), it is replaced by the next letter in the alphabet.
   - If the character is a lowercase 'z', it is replaced by 'a'.
   - Similarly, if the character is an uppercase letter (from 'A' to 'Y'), it is replaced by the next letter in the alphabet.
   - If the character is an uppercase 'Z', it is replaced by 'A'.
   - Non-alphabetic characters (such as spaces, punctuation, and digits) remain unchanged.

3. **Output**:
   - After processing each character, the transformed character is printed using the `write` function.
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
        IF the character is a lowercase letter between 'a' and 'y' THEN
            PRINT the next letter (current letter + 1)
        ELSE IF the character is 'z' THEN
            PRINT 'a'
        ELSE IF the character is an uppercase letter between 'A' and 'Y' THEN
            PRINT the next letter (current letter + 1)
        ELSE IF the character is 'Z' THEN
            PRINT 'A'
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
   - The program first checks if exactly one argument is provided. If there is no argument or more than one, it prints a newline and exits.

2. **ROTONE Transformation**:
   - The program iterates through each character of the string:
     - If the character is between 'a' and 'y', it is replaced by the next letter (i.e., `*s + 1`).
     - If the character is 'z', it is replaced by 'a' (`*s - 25`).
     - If the character is between 'A' and 'Y', it is replaced by the next letter.
     - If the character is 'Z', it is replaced by 'A'.
     - Non-alphabetical characters are left unchanged.

3. **Output**:
   - The `write` function is used to print each transformed character, followed by a newline at the end of the program.
