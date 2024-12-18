## **ft_rostring**

---

### **Expected Files**  
- `rostring.c`  

### **Allowed Functions**  
- `write`  
- `malloc`  
- `free`

---

### **Description**  
The program rotates the input string by shifting the first word to the last position, while keeping the other words in their original order. It will print the string with a single space between words and no leading or trailing spaces. If there is an incorrect number of arguments, the program will output only a newline.

**Definition of a "word":**  
A "word" is any contiguous sequence of characters separated by spaces, tabs, or the start/end of the string.

---

### **Expected Output Format**  
- Words are separated by exactly one space.  
- If no argument is provided or more than one argument is passed, the program will display a newline (`\n`).

---

### **Function Prototype**  
```c
int main(int argc, char **argv);
```

---

### **Program Behavior Step by Step**  
1. **Check for Valid Arguments**:  
   If the number of arguments (`argc`) is not equal to 2, print a newline (`\n`) and exit.

2. **Trim Leading Whitespaces**:  
   Skip any leading spaces or tabs in the input string (`argv[1]`).

3. **Identify the First Word**:  
   - Find the first word by iterating through the string until a space or tab is encountered.
   - Mark the start and end of the first word.

4. **Skip Extra Spaces Between Words**:  
   - After the first word, skip any spaces or tabs between words.

5. **Print Remaining Words**:  
   - Print each word one by one, separating them with a single space.
   - After printing the last word, print a space (but no extra space after the last word).

6. **Print the First Word at the End**:  
   - Print the first word at the end to rotate the words left by one position.

7. **Final Newline**:  
   - After the entire string has been printed with the proper formatting, print a newline (`\n`).

---

### **Pseudo Code**  
```plaintext
FUNCTION main(argc, argv):
    IF argc is not equal to 2:
        PRINT newline
        EXIT

    SET str to argv[1]   // Store the input string in `str`
    
    REMOVE leading spaces or tabs from str:
        LOOP through str while str[i] is a space or tab:
            Increment i
    END LOOP

    SET first_word_start to str[i]    // Mark the start of the first word
    LOOP through str while str[i] is not a space or tab and str[i] is not '\0':
        Increment i                   // Move i until the end of the first word
    END LOOP
    SET first_word_end to str[i]      // Mark the end of the first word
    
    REMOVE any spaces or tabs between words:
        LOOP through str while str[i] is a space or tab:
            Increment i
    END LOOP

    IF str[i] is not '\0':  
        // There are more words remaining after the first one
        LOOP through the rest of the string:
            IF str[i] is a space or tab:
                WHILE str[i] is a space or tab:
                    Increment i       // Skip any extra spaces or tabs
                IF str[i] is not '\0':
                    PRINT a space character
            ELSE:
                PRINT the current character from str[i]
                Increment i
        END LOOP

        PRINT a space (between last word and the first word)
    END IF
    
    PRINT the first word (from first_word_start to first_word_end)

    PRINT newline
```
