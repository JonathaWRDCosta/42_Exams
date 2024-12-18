# Exercise: last_word

## Description

Assignment name  : last_word  
Expected files   : last_word.c  
Allowed functions: write  

---------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a newline.

### Definitions:
- A word is a section of a string delimited by spaces, tabs, or the start/end of the string.

### Requirements:
- If the number of parameters is not exactly 1, or if there are no words in the string, the program should display a newline.

### Examples:

```bash
$> ./last_word "FOR PONY" | cat -e
PONY$

$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$

$> ./last_word "   " | cat -e
$

$> ./last_word "a" "b" | cat -e
$

$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
```

---

## Function Prototype

```c
void last_word(char *str);
```

---

## Program Behavior

1. **Input**:
   - The program expects exactly one argument, a string `str`.
   
2. **Logic**:
   - The program should find the last word in the string.
   - A word is a sequence of characters delimited by spaces, tabs, or the beginning/end of the string.
   - The program should handle cases where the string contains leading, trailing, or multiple spaces between words.
   
3. **Edge Cases**:
   - If no words are found (i.e., the string consists of only spaces), the program will output a blank line.
   - If the number of arguments is not exactly 1, the program will output a blank line.

---

## Pseudo Code

```
START
    If the number of arguments is not 2, return a newline
    Initialize i to 0 and j to 0
    Loop through the string to find the last word:
        If the current character is a space and the next character is a word, update j to the next position
        Increment i
    Loop through the string starting from position j and print each character until the end of the word
    Print a newline
END
```

---

## Code Explanation

1. **Loop through the string**:
   - We start by iterating through the string to find the starting position of the last word. We update the variable `j` when we encounter a space and the next character is part of a word.
   
2. **Print the last word**:
   - After determining the starting position of the last word (`j`), we continue printing characters starting from that position until the end of the word.

3. **Edge Handling**:
   - The program ensures that any leading or trailing spaces are ignored when identifying the last word, and if the string contains only spaces, a newline is displayed.
