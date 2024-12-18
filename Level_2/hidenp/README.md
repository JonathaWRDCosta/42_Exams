Assignment name  : hidenp  
Expected files   : hidenp.c  
Allowed functions: write  

--------------------------------------------------------------------------------

Write a program named **hidenp** that takes two strings and displays `1` followed by a newline if the first string is hidden in the second one, otherwise displays `0` followed by a newline.

Let `s1` and `s2` be strings. We say that `s1` is hidden in `s2` if it's possible to find each character from `s1` in `s2`, in the same order as they appear in `s1`. The empty string is considered hidden in any string.

If the number of parameters is not 2, the program displays a newline.

---

## **Function Prototype**

```c
int main(int argc, char *argv[]);
```

---

## **Program Behavior**

1. **Argument Handling**:
   - If there are not exactly two arguments, the program displays a newline and exits.
  
2. **String Matching**:
   - The program checks if all characters of the first string `s1` appear in `s2` in the same order, even if there are characters in `s2` that are not in `s1`.

3. **Return Results**:
   - If the first string is found in the second string in order, the program displays `1` followed by a newline.
   - If not, the program displays `0` followed by a newline.

---

## **Pseudo Code**

```
START
    IF the number of arguments (argc) is NOT 3 THEN
        PRINT a newline
        EXIT the program
    END IF

    Initialize i = 0 (for string 1) and j = 0 (for string 2)

    WHILE the second string character (argv[2][j]) exists AND the first string character (argv[1][i]) exists DO
        IF characters match (argv[2][j] == argv[1][i]) THEN
            Increment i (move to next character of string 1)
        END IF
        Increment j (move to next character of string 2)
    END WHILE

    IF all characters of string 1 are found (argv[1][i] == '\0') THEN
        PRINT 1 followed by a newline
    ELSE
        PRINT 0 followed by a newline
    END IF
END
```

---

## **Code Explanation**

1. **Argument Check**:
   - The program starts by checking if exactly two arguments are provided. If not, it outputs a newline and exits.

2. **String Matching**:
   - The program then compares each character of the first string (`argv[1]`) with the second string (`argv[2]`).
   - A `while` loop iterates through the second string (`argv[2][j]`) while also checking if the characters of the first string (`argv[1][i]`) match in order.
   - Whenever a match is found, `i` is incremented to check for the next character in `argv[1]`.
   - If all characters of `argv[1]` are found in sequence within `argv[2]`, the program outputs `1`.

3. **Final Output**:
   - If all characters of the first string are found in order in the second string, the program prints `1`. If not, it prints `0`. The program ends by printing a newline.
