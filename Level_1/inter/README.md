# Exercise: inter

## Description

Assignment name  : inter  
Expected files   : inter.c  
Allowed functions: write  

---------------------------------------------------------------

Write a program that takes two strings and displays, without duplicates, the characters that appear in both strings, in the order they appear in the first one.

The program must follow these rules:

- Only display characters that appear in both strings.
- Each character should be displayed only once, even if it appears multiple times in the strings.
- The characters must be displayed in the order they appear in the first string.
- The display will be followed by a newline character (`\n`).
- If the number of arguments is not 2, the program should display only a newline.

### Example:

```bash
$> ./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$> ./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$> ./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$> ./inter | cat -e
$
```

---

## Function Prototype

```c
int main(int ac, char **av);
```

---

## Program Behavior

1. **Input Strings**:
   - The program takes two arguments: `av[1]` and `av[2]`, which are the two input strings.
   
2. **Character Matching**:
   - The program compares each character of the first string (`av[1]`) with each character of the second string (`av[2]`).
   - If a character from `av[1]` exists in `av[2]`, it is printed, provided it hasn't been printed already (using a `seen` array to track printed characters).
   
3. **No Duplicates**:
   - Each character from the first string should be printed at most once, even if it appears multiple times in both strings.

4. **If No Arguments**:
   - If the program does not receive exactly two arguments, it simply outputs a newline.

5. **End of Output**:
   - After displaying the characters, the program will append a newline.

---

## Pseudo Code

```
START
    If the number of arguments is not 2
        Print a newline
        Exit the program
    Initialize an array `seen[256]` to track the characters printed
    For each character in the first string:
        For each character in the second string:
            If the characters match and haven't been printed:
                Print the character
                Mark the character as printed
                Break the inner loop
    Print a newline at the end
END
```

---

## Code Explanation

1. **Initialization**:
   - The program initializes an array `seen[256]` to keep track of the characters that have already been printed. The array size of 256 is large enough to cover all possible ASCII characters.
   
2. **Outer Loop**:
   - The outer loop iterates through each character of the first string (`av[1]`).
   
3. **Inner Loop**:
   - For each character of the first string, the inner loop iterates through the second string (`av[2]`).
   - When a match is found and the character has not been printed yet (checked using the `seen` array), it is printed and marked as seen.
   
4. **Completion**:
   - After processing both strings, the program outputs a newline.
