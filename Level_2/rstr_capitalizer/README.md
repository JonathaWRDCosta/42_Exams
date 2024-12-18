# **Assignment Name**: rstr_capitalizer

**Expected Files**: `rstr_capitalizer.c`  
**Allowed Functions**: `write`

---

## **Description**

Write a program that takes one or more strings as arguments. For each string, the program should capitalize the last letter of each word while converting all other letters to lowercase. It should then print the modified strings, each followed by a newline.

A "word" is defined as any section of the string that is delimited by spaces, tabs, or the start/end of the string. If a word contains only one letter, it must be capitalized.

A letter is defined as any character in the set `[a-zA-Z]`.

If no parameters are provided, the program should simply display a newline.

---

## **Input**

- The program takes one or more arguments, each of which is a string.  
- If no arguments are provided, the program prints a newline.

---

## **Output Format**

- For each argument (string), the program modifies the string by:
  - Converting all letters to lowercase.
  - Capitalizing the last letter of each word.
  - Printing the modified string followed by a newline.

---

## **Function Prototype**

```c
int main(int argc, char **argv);
void rstr_capitalizer(char *str);
```

---

## **Program Behavior**

1. **Argument Handling**:
   - If no arguments are provided (`argc == 1`), the program prints a newline and exits.
   
   - Otherwise, it processes each argument in turn, calling `rstr_capitalizer` on each string.
   
2. **String Processing**:
   - For each string:
     - The program processes each character.
     - It converts all letters to lowercase.
     - It identifies the last letter of each word and converts it to uppercase.
   
3. **Word Definition**:
   - A "word" is defined as a sequence of letters delimited by spaces, tabs, or the start/end of the string.
   
4. **Output**:
   - After processing each string, the program outputs the modified string followed by a newline.

---

## **Pseudo Code**

```plaintext
START

    # Step 1: Check if there are arguments
    IF argc == 1:
        PRINT a newline
        EXIT the program

    # Step 2: Process each argument string
    FOR each argument i from 1 to argc-1:
        CALL rstr_capitalizer with argv[i] as the parameter
        PRINT a newline

END


# Function: rstr_capitalizer (Capitalizes the last letter of each word)
START rstr_capitalizer(str):
    DEFINE an index i = 0

    # Step 1: Loop through each character in the string
    WHILE str[i] is not the null character:
        # Step 2: Convert uppercase letters to lowercase
        IF str[i] is an uppercase letter:
            Convert str[i] to lowercase by adding 32 (ASCII difference)
        
        # Step 3: Identify the last letter of each word
        IF str[i] is a letter (a-z or A-Z) AND str[i + 1] is a space, tab, or null:
            # Capitalize the last letter of each word
            Convert str[i] to uppercase by subtracting 32 (ASCII difference)
        
        # Step 4: Print the current character
        WRITE the current character str[i] to stdout
        INCREMENT i to check the next character
    
END rstr_capitalizer
```

---

## **Code Explanation**

1. **Argument Handling**:
   - The `main` function first checks if any arguments are passed. If no arguments are provided (`argc == 1`), the program simply prints a newline and exits.
   - If arguments are provided, it processes each string in the `argv` array.

2. **Capitalization Logic**:
   - The `rstr_capitalizer` function processes each string character by character.
   - The program converts each character to lowercase and checks if it is the last letter of a word. If it is, it capitalizes that letter.
   - It uses ASCII values to convert between uppercase and lowercase characters:
     - To convert a character to lowercase, it adds `32` to its ASCII value.
     - To convert a character to uppercase, it subtracts `32` from its ASCII value.
   
3. **Output**:
   - After processing each string, the program outputs the modified string followed by a newline.

---

## **Examples**

### Example 1:

```bash
$> ./rstr_capitalizer | cat -e
$
```

- No arguments are passed, so the program outputs a newline.

### Example 2:

```bash
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
```

- The program capitalizes the last letter of each word and converts the rest to lowercase.

### Example 3:

```bash
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
```

- The program processes multiple strings and formats each one as specified.
