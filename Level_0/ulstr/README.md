# Exercise: ulstr

## Description

Assignment name  : ulstr  
Expected files   : ulstr.c  
Allowed functions: write  
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters. Other characters remain unchanged.

The program should display the result followed by a newline (`\n`).

If the number of arguments is not 1, the program displays a newline.

### Examples:

```bash
$> ./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$

$> ./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $

$> ./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$

$> ./ulstr | cat -e
$
```

### Expected Output Format

- The program reverses the case of each alphabetic character in the string.
- Non-alphabetic characters (such as numbers, punctuation, and spaces) remain unchanged.
- The program prints the modified string, followed by a newline (`\n`).

---

## Function Prototype

```c
int main(int argc, char **argv);
```

---

## Program Behavior

1. **Argument Handling**:
   - The program checks if exactly one argument is provided.
   - If the number of arguments is not 1, the program simply outputs a newline and exits.

2. **Case Reversal**:
   - The program processes each character in the string:
     - If the character is a lowercase letter (from 'a' to 'z'), it is converted to uppercase by subtracting 32 (ASCII difference between lowercase and uppercase letters).
     - If the character is an uppercase letter (from 'A' to 'Z'), it is converted to lowercase by adding 32.
     - Non-alphabetical characters (such as digits, spaces, and punctuation) are left unchanged.

3. **Output**:
   - The `write` function is used to print each modified character, followed by a newline character.

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
            CONVERT the character to uppercase (subtract 32)
        ELSE IF the character is an uppercase letter between 'A' and 'Z' THEN
            CONVERT the character to lowercase (add 32)
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

2. **Case Reversal**:
   - The program iterates through each character of the string:
     - If the character is between 'a' and 'z', it is converted to uppercase.
     - If the character is between 'A' and 'Z', it is converted to lowercase.
     - Non-alphabetical characters are left unchanged.

3. **Output**:
   - The `write` function is used to print each transformed character, followed by a newline at the end of the program.
