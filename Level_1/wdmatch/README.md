# Exercise: wdmatch

## Description

Assignment name  : wdmatch  
Expected files   : wdmatch.c  
Allowed functions: write  

---------------------------------------------------------------

Write a program that takes two strings and checks whether it is possible to write the first string using characters from the second string, while respecting the order in which these characters appear in the second string.

If it's possible, the program should display the first string, followed by a newline (`\n`). Otherwise, it should simply display a newline (`\n`).

If the number of arguments is not exactly 2, the program should display only a newline (`\n`).

### Function Prototype:

```c
int main(int argc, char **argv);
```

### Parameters:
- The program takes two strings as command-line arguments:
  - The first string is the one that we need to check.
  - The second string is the source from which we can extract characters to form the first string.

### Requirements:
- The program should check if it's possible to form the first string by selecting characters from the second string, respecting the order of characters in the second string.
- The program should print the first string if it's possible, followed by a newline.
- If it's not possible to form the first string from the second string, print only a newline.

### Example:

For the input:

```bash
./wdmatch "faya" "fgvvfdxcacpolhyghbreda"
```

The output should be:

```
faya
```

For the input:

```bash
./wdmatch "faya" "fgvvfdxcacpolhyghbred"
```

The output should be:

```
(empty output, only a newline)
```

---

## Function Behavior

1. **Input**:
   - The input consists of two strings passed as command-line arguments.
   - The program should ensure that exactly two arguments are provided.

2. **Output**:
   - The program should print the first string if it is possible to form it using the characters from the second string in the same order. 
   - Otherwise, the program prints only a newline (`\n`).

3. **Edge Case Handling**:
   - If the number of arguments is not exactly 2, the program prints a newline (`\n`).
   - If it's not possible to form the first string from the second string, the program prints only a newline.

---

## Pseudo Code

```
START
    If there are exactly two arguments:
        Initialize two pointers (i, j) to 0
        Traverse the second string:
            If the characters at i and j are equal:
                Increment i
        If all characters in the first string have been matched:
            Print the first string
    Print a newline
END
```

---

## Code Explanation

1. **Input Validation**:
   - The program checks if there are exactly two command-line arguments (`argc == 3`). If not, it simply prints a newline.

2. **Character Matching**:
   - The program uses two pointers (`i` and `j`) to traverse the first and second strings, respectively.
   - The pointer `i` tracks the position in the first string, and `j` tracks the position in the second string.
   - If a character from the first string (`av[1][i]`) matches a character from the second string (`av[2][j]`), the pointer `i` is incremented. This continues until all characters in the first string are found in the second string.

3. **Output**:
   - If the first string has been successfully matched (i.e., `av[1][i] == '\0'`), the program prints the first string character by character.
   - If the matching is not possible, only a newline is printed.

4. **Edge Case Handling**:
   - If there are not exactly two arguments, the program prints a newline (`\n`).
   - If the characters of the first string cannot be found in the second string in the correct order, the program prints a newline.
