# Exercise: search_and_replace

## Description

Assignment name  : search_and_replace  
Expected files   : search_and_replace.c  
Allowed functions: write, exit  

--------------------------------------------------------------------------------

Write a program called `search_and_replace` that takes 3 arguments. The first argument is a string in which to replace a letter (second argument) by another one (third argument).

If the number of arguments is not 3, simply display a newline.

If the second argument is not contained in the first one (the string), the program should simply rewrite the string followed by a newline.

### Expected Output Format

- If the second argument exists in the string, replace all occurrences of it with the third argument and display the modified string.
- If the second argument is not found in the string, just print the original string followed by a newline.
- If the number of arguments is not exactly 3, print a newline.

---

## Function Prototype

```c
int main(int argc, char *argv[]);
```

---

## Program Behavior

1. **Argument Check**:
   - The program first checks if exactly 3 arguments are provided. If the number of arguments is not 3, it simply prints a newline and terminates.

2. **Character Replacement**:
   - The program iterates over the first string (`argv[1]`), and whenever it encounters the character specified in `argv[2][0]`, it replaces it with the character from `argv[3][0]`.

3. **Printing the Result**:
   - After modifying the string, or if no modifications are needed, the program prints the string followed by a newline.

---

## Pseudo Code

```
START
    IF the number of arguments (argc) is NOT 4 THEN
        PRINT a newline
        EXIT the program
    END IF

    INITIALIZE i to 0

    WHILE the character at position i of argv[1] is not null ('\0') DO
        IF the character at position i of argv[1] is equal to argv[2][0] THEN
            REPLACE the character at position i with argv[3][0]
        END IF
        WRITE the character at position i to standard output
        INCREMENT i
    END WHILE

    WRITE a newline to standard output
END
```

---

## Code Explanation

1. **Argument Handling**:
   - The program checks that exactly 3 arguments are provided (`argc == 4`). If not, it simply prints a newline.

2. **Character Replacement**:
   - It iterates over each character of the string provided in `argv[1]`. If a character matches the second argument (`argv[2][0]`), it replaces it with the character from the third argument (`argv[3][0]`).

3. **Output**:
   - The modified string is printed, followed by a newline. If no replacement was made, the original string is printed with a newline.

4. **Edge Cases**:
   - If the second argument does not appear in the string, the program outputs the original string.
   - If the program is not provided with exactly 3 arguments, it simply outputs a newline.