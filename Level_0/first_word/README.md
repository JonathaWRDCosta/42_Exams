### first_word

---

**Assignment name**: first_word  
**Expected files**: `first_word.c`  
**Allowed functions**: `write`  

---

### Description

Write a program that takes a string and displays its first word, followed by a newline.

- A "word" is a section of the string delimited by spaces (`' '`) or tabs (`'\t'`), or by the start or end of the string.
- If the number of arguments is not 1 or if there are no words, the program must simply display a newline.

---

### Function Prototype

```c
char ft_first_word(char *str);
```

---

### Program Behavior

1. If the number of arguments (`argc`) is not equal to 2:
   - Print a newline (`'\n'`) and exit the program.
2. If the argument is an empty string or contains no words:
   - Print a newline (`'\n'`) and exit the program.
3. Traverse the input string:
   - Skip leading spaces and tabs.
   - Print characters from the first word until encountering a space, tab, or the end of the string.
4. Print a newline after the first word.

---

### Pseudo Code

```plaintext
FUNCTION ft_first_word(str)
    WHILE the current character in str is a space or tab
        MOVE to the next character
    END WHILE

    WHILE the current character is not a space, tab, or null terminator
        PRINT the current character
        MOVE to the next character
    END WHILE

    PRINT a newline character
END FUNCTION

MAIN FUNCTION
    IF the number of arguments is not 2
        PRINT a newline and EXIT
    END IF

    CALL ft_first_word with the input string
END MAIN
```