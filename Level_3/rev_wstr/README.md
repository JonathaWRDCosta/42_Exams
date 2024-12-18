## **rev_wstr**

**Assignment name**: rev_wstr  
**Expected files**: `rev_wstr.c`  
**Allowed functions**: `write`, `malloc`, `free`  

---

### **Description**

The `rev_wstr` program takes a string as a parameter and prints its words in reverse order. A "word" is defined as a part of the string bounded by spaces, tabs, or the start/end of the string. If the number of parameters passed to the program is different from 1, the program will display a newline (`\n`).

---

### **Expected Output Format**

- If one parameter is passed, the program prints the words in reverse order, separated by a single space.
- If no parameters or more than one parameter are passed, the program prints just a newline (`\n`).

---

### **Function Prototypes**

```c
int main(int argc, char **argv);
```

---

### **Program Behavior**

1. **Input Validation**:  
   The program first checks if there is exactly one argument passed. If not, it prints a newline and exits.

2. **Word Parsing**:  
   The program then iterates through the string backwards, identifying the boundaries of each word (delimited by spaces or tabs). For each word, the program prints it in reverse order, ensuring that words are separated by a single space.

3. **Edge Cases**:  
   - If the input is an empty string or contains no words, the program outputs a newline.
   - The program handles cases with multiple words separated by spaces or tabs and correctly formats the output.

4. **Output**:  
   The words are printed in reverse order, and a single space separates them. A newline is printed at the end.

---

### **Pseudo Code**

```plaintext
FUNCTION main(argc, argv):
    IF argc is not equal to 2:
        Print a newline
        EXIT

    Initialize variables start, end, and i
    Set i to 0

    WHILE argv[1][i] is not NULL:
        INCREMENT i (to find the end of the string)

    WHILE i >= 0:
        SKIP spaces, tabs, and null characters
        Set end to i (end of the word)

        WHILE argv[1][i] is not space, tab, or NULL:
            DECREMENT i (moving to the beginning of the word)

        Set start to i + 1 (start of the word)
        Print the word from start to end

        IF start is not 0:
            Print a space between words

    Print a newline at the end
```

---

### **Code Explanation**

- **Word Traversal**:  
   The program uses two pointers (`start` and `end`) to define the boundaries of each word. It moves backward through the string, skipping spaces and tabs, to extract each word in reverse order.

- **Word Printing**:  
   For each word, the program uses the `write` function to print each character one by one, ensuring that words are printed without any extra spaces between them, except between words.

- **Edge Handling**:  
   If there are no arguments or more than one, the program simply prints a newline.

---

### **Example**

```bash
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$

$> ./rev_wstr "abcdefghijklm"
abcdefghijklm

$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$

$> ./rev_wstr | cat -e
$
```
