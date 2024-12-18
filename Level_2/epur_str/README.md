# Exercise: epur_str

## Description

Assignment name  : epur_str  
Expected files   : epur_str.c  
Allowed functions: write  

---------------------------------------------------------------

Write a program that takes a string and displays it with exactly one space between words, removing leading and trailing spaces or tabs, followed by a newline (`\n`).

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.

If the number of arguments is not exactly 1, or if there are no words to display, the program should print just a newline.

### Examples:

For the input:

```bash
$> ./epur_str "See? It's easy to print the same thing" | cat -e
```

The output should be:

```
See? It's easy to print the same thing$
```

For the input:

```bash
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
```

The output should be:

```
this time it will be more complex .$
```

For the input:

```bash
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
```

The output should be:

```
$
```

For the input:

```bash
$> ./epur_str "" | cat -e
```

The output should be:

```
$
```

---

## Function Behavior

1. **Input**:
   - The program takes a single string as a command-line argument.
   - The string may contain multiple spaces or tabs between words.
   
2. **Whitespace Handling**:
   - The program removes all leading and trailing spaces and tabs.
   - Consecutive spaces or tabs are replaced by a single space.

3. **Output**:
   - The program prints the string with exactly one space between words, and no spaces or tabs at the beginning or the end, followed by a newline.

4. **Edge Case Handling**:
   - If the number of arguments is not 1 or the string is empty, the program will output just a newline.

---

## Pseudo Code

```
START
    If the number of arguments is not 1:
        Print newline
        Exit

    Initialize a flag to track when a space should be printed
    Traverse the string character by character:
        Skip leading spaces/tabs
        For each character:
            If it's a space or tab and the flag is not set:
                Print a space and set the flag
            If it's not a space or tab:
                Print the character and reset the flag
    Print newline
END
```

---

## Code Explanation

1. **Whitespace Skipping**:
   - The program skips any leading spaces or tabs using a `while` loop before starting to print characters.

2. **Flag Usage**:
   - A flag (`flg`) is used to determine if a space should be printed before a word. If a space or tab is encountered after a word, a single space is printed before the next word starts.

3. **Main Loop**:
   - The program iterates through the string, printing characters one by one. It ensures that consecutive spaces or tabs are replaced by a single space, and no spaces are printed at the start or end of the string.

4. **Edge Case**:
   - If the argument is empty or if there are no words in the string, the program outputs only a newline.
