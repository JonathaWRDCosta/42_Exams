# Exercise: snake_to_camel

## Description

Assignment name  : snake_to_camel  
Expected files   : snake_to_camel.c  
Allowed functions: malloc, free, realloc, write  

---------------------------------------------------------------

Write a program that takes a single string in snake_case format and converts it into a string in lowerCamelCase format.

### Function Prototype:

```c
int main(int argc, char **argv);
```

### Parameters:
- **argc**: The number of arguments passed to the program. It should be `2` (one argument being the string in `snake_case` format).
- **argv**: An array of strings, where `argv[1]` is the string in `snake_case` format to be converted.

### Requirements:
- The input string is in `snake_case` format, where words are in lowercase and separated by underscores (`_`).
- The output should be in `lowerCamelCase` format, where the first word starts with a lowercase letter, and each subsequent word begins with a capital letter (no underscores).
- If the number of arguments is not 2, or if the input is empty, the program should display an empty string followed by a newline.

### Example:

For the input `"here_is_a_snake_case_word"`, the output should be:
```
hereIsASnakeCaseWord
```

For the input `"hello_world"`, the output should be:
```
helloWorld
```

If no input is provided, the program should output:
```
```

---

## Function Behavior

1. **Input**:
   - The program takes a single string argument (`argv[1]`) in `snake_case` format.

2. **Output**:
   - The program prints the converted string in `lowerCamelCase` format.

3. **Edge Cases**:
   - If the input contains multiple underscores or invalid characters, ensure the program handles them correctly.

---

## Pseudo Code

```
START
    If argc is not equal to 2, return
    Initialize an index to 0
    Iterate through each character in the string:
        If the character is an underscore ('_'):
            Skip the underscore and convert the next character to uppercase
        Otherwise, print the character
    Output a newline character at the end
END
```

---

## Code Explanation

1. **Input Processing**:
   - The program first checks if there is exactly one string argument provided (i.e., `argc == 2`).
   - It processes each character in the string `argv[1]`:
     - If it encounters an underscore (`_`), it skips it and converts the next character to uppercase.
     - Otherwise, it prints the current character.
   - The program continues this until the entire string is processed.

2. **Edge Handling**:
   - If no arguments are provided or if `argc != 2`, the program simply prints a newline.
   - The program doesn't handle cases where the input string has uppercase letters or other non-lowercase characters, assuming that the input will strictly follow the `snake_case` format.
