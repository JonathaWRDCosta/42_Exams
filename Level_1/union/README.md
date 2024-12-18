# Exercise: union

## Description

Assignment name  : union  
Expected files   : union.c  
Allowed functions: write  

---------------------------------------------------------------

Write a program that takes two strings and displays, without duplicates, the characters that appear in either one of the strings.

The characters should be displayed in the order they appear in the command line, and the output should be followed by a newline (`\n`).

If the number of arguments is not exactly 2, the program should display only a newline.

### Function Prototype:

```c
int main(int argc, char **argv);
```

### Parameters:
- The program takes two command-line arguments: two strings.

### Requirements:
- The program should display the characters that appear in either of the two strings, without repeating any character.
- The order of characters in the output should match the order in which they appear in the input strings, with no duplicates.

### Example:

For the input:

```bash
./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj"
```

The output should be:

```
zpadintoqefwjy
```

---

## Function Behavior

1. **Input**:
   - The input consists of two strings provided as command-line arguments.
   - The program should ensure that exactly two arguments are provided.

2. **Output**:
   - The program should print the characters that appear in either of the two strings, in the order of appearance, with no duplicates.
   - The output should end with a newline (`\n`).

3. **Edge Handling**:
   - If the program receives fewer than or more than two arguments, it will simply print a newline (`\n`).
   - The program uses an array to track the characters already printed, ensuring that duplicates are not displayed.

---

## Pseudo Code

```
START
    If there are exactly two arguments:
        Initialize a seen array to track which characters have been printed
        Process the first string:
            For each character in the string:
                If it has not been printed before, print it and mark it as seen
        Process the second string in the same way
    Print a newline
END
```

---

## Code Explanation

1. **Input Validation**:
   - The program checks if the number of arguments (`argc`) is exactly 3, as the first argument is the program name, and the second and third arguments are the two strings to be processed.

2. **Tracking Seen Characters**:
   - An array `seen[256]` is used to track which characters have been encountered. The array size is 256 to cover all possible ASCII characters.
   - The program iterates through each character of the strings and checks whether it has already been printed by checking the `seen` array. If it hasn't, it prints the character and marks it as "seen" in the array.

3. **Output**:
   - The program prints the characters in the order they appear in the input strings, ensuring that duplicates are not printed.

4. **Edge Case Handling**:
   - If the number of arguments is not 2, the program simply prints a newline (`\n`).
