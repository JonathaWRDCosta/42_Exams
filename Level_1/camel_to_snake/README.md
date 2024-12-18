# Exercise: camel_to_snake

## Description

Assignment name  : camel_to_snake  
Expected files   : camel_to_snake.c  
Allowed functions: malloc, free, realloc, write  

--------------------------------------------------------------------------------

Write a program that takes a single string in `lowerCamelCase` format and converts it into a string in `snake_case` format.

- A `lowerCamelCase` string is a string where each word begins with a capital letter except for the first one.
- A `snake_case` string is a string where each word is in lower case, separated by an underscore ("_").

### Examples:

```bash
$> ./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word

$> ./camel_to_snake "helloWorld" | cat -e
hello_world$

$> ./camel_to_snake | cat -e
$
```

### Expected Output Format

- The program takes a `lowerCamelCase` string as input.
- It converts the string to `snake_case` format.
- It outputs the result followed by a newline (`\n`).
- If the number of arguments is not 1, it outputs just a newline.

---

## Function Prototype

```c
void ft_camel_to_snake(char *str);
```

---

## Program Behavior

1. **Argument Handling**:
   - The program first checks if exactly one argument is provided. If the number of arguments is not 2 (the program name and the string), it prints a newline and exits.

2. **Conversion**:
   - The program processes each character in the string:
     - If a character is an uppercase letter (from 'A' to 'Z'), it converts it to its lowercase equivalent and outputs an underscore ("_").
     - The program then prints the character, whether it is a converted letter or a lowercase letter.

3. **Output**:
   - The program prints the modified string followed by a newline using the `write` function.

---

## Pseudo Code

```
START
    IF the number of arguments (argc) is NOT 2 THEN
        PRINT a newline
        EXIT the program
    END IF

    FOR each character in the string (argv[1]) DO
        IF the character is an uppercase letter THEN
            CONVERT the character to lowercase
            PRINT an underscore
        END IF

        PRINT the character (converted or original)
    END FOR

    PRINT a newline
END
```

---

## Code Explanation

1. **Argument Check**:
   - The program first checks if exactly one argument is passed. If not, it prints a newline and exits.

2. **Camel to Snake Conversion**:
   - The program iterates through each character in the string:
     - If the character is uppercase (between 'A' and 'Z'), it is converted to lowercase by adding 32 to the character value (ASCII conversion). The program also prints an underscore before the lowercase character.
     - If the character is already lowercase, it is printed as it is.

3. **Output**:
   - The `write` function is used to print both the converted characters and underscores, followed by a newline at the end.
