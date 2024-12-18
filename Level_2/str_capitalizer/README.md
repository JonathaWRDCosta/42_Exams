# **Assignment Name**: str_capitalizer

**Expected Files**: `str_capitalizer.c`  
**Allowed Functions**: `write`

---

## **Description**

Write a program that takes one or more strings as arguments and capitalizes the first character of each word (if it's a letter), converts the rest of the characters in each word to lowercase, and displays the result on the standard output followed by a newline.

A word is defined as any sequence of characters delimited by spaces, tabs, or the start/end of the string. If a word contains only one letter, it must be capitalized.

If no arguments are provided, the program should display just a newline.

---

## **Input**

- The program accepts one or more strings as command-line arguments.  
- If no arguments are provided, the program outputs a newline.

---

## **Output Format**

- The program modifies each string by capitalizing the first character of each word and converting all other characters in the word to lowercase.  
- Each modified string is printed followed by a newline.

---

## **Function Prototype**

```c
int main(int argc, char **argv);
void ft_strcap(char *str);
```

---

## **Program Behavior**

1. **Argument Handling**:
   - If no arguments are passed (`argc < 2`), the program prints a newline and exits.
   - If arguments are provided, the program processes each string and applies the capitalization logic.

2. **String Processing**:
   - For each string:
     - The program ensures the first letter of each word is capitalized.
     - It converts all other letters in the word to lowercase.
     - Words are defined by spaces, tabs, or string boundaries.

3. **Word Definition**:
   - A "word" is any sequence of characters that are not spaces or tabs, bounded by spaces/tabs or the start/end of the string.
   - The first character of each word is capitalized, and the rest of the word is converted to lowercase.

4. **Output**:
   - After processing each string, the program prints the modified string followed by a newline.

---

## **Pseudo Code**

```plaintext
START

    # Step 1: Check if there are arguments
    IF argc < 2:
        PRINT a newline
        EXIT the program

    # Step 2: Process each argument string
    FOR each argument i from 1 to argc-1:
        CALL ft_strcap with argv[i] as the parameter
        PRINT a newline

END


# Function: ft_strcap (Capitalizes the first letter of each word)
START ft_strcap(str):
    DEFINE an index i = 0

    # Step 1: Capitalize the first character if it is a lowercase letter
    IF str[i] is a lowercase letter:
        Convert str[i] to uppercase by subtracting 32 (ASCII difference)
    WRITE str[i] to stdout

    # Step 2: Loop through each character of the string starting from the second character
    WHILE str[i] is not the null character:
        # Step 3: Convert uppercase letters to lowercase
        IF str[i] is an uppercase letter:
            Convert str[i] to lowercase by adding 32 (ASCII difference)
        
        # Step 4: Capitalize the first letter of each word
        IF str[i] is a letter AND previous character is a space or tab:
            Convert str[i] to uppercase by subtracting 32 (ASCII difference)
        
        # Step 5: Print the current character
        WRITE str[i] to stdout
        INCREMENT i to check the next character

END ft_strcap
```

---

## **Code Explanation**

1. **Argument Handling**:
   - The `main` function first checks if any arguments are passed. If no arguments are provided (`argc < 2`), the program prints a newline and exits.
   - If arguments are provided, it processes each string in the `argv` array.

2. **Capitalization Logic**:
   - The `ft_strcap` function processes each string by first capitalizing the first letter if it's a lowercase letter.
   - Then it continues checking and modifying the rest of the characters in the string:
     - Converts uppercase letters to lowercase.
     - Identifies the first letter of each word and capitalizes it.

3. **Output**:
   - After processing each string, the program prints the modified string followed by a newline.

---

## **Examples**

### Example 1:

```bash
$> ./str_capitalizer | cat -e
$
```

- No arguments are passed, so the program outputs a newline.

### Example 2:

```bash
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
```

- The program capitalizes the first character of each word and converts the rest to lowercase.

### Example 3:

```bash
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
```

- The program processes multiple strings and formats each one as specified.