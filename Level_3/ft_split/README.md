## **ft_split**

**Assignment name**: ft_split  
**Expected files**: `ft_split.c`  
**Allowed functions**: `malloc`  

---

### **Description**

The `ft_split` function takes a string and splits it into words, returning them as a NULL-terminated array of strings. A "word" is defined as a part of the string delimited by spaces, tabs, new lines, or the start/end of the string.

---

### **Expected Output Format**

- This function returns a `char **`, which is a NULL-terminated array of strings. Each string in the array represents a "word" from the input string.

---

### **Function Prototypes**

```c
char **ft_split(char *str);
```

---

### **Program Behavior**

1. **Input Parsing**:  
   The function first processes the input string by skipping over spaces, tabs, and new lines to identify the boundaries of each word.

2. **Counting Words**:  
   The number of words is counted by iterating through the string and detecting sequences of non-delimited characters.

3. **Memory Allocation**:  
   After counting the words, memory is allocated for the array that will hold the individual words. Each word is then copied into the allocated space using `malloc`.

4. **Splitting Words**:  
   The function then iterates through the string again, extracting each word and storing it in the array. Each word is copied using the helper function `ft_strncpy`, which ensures proper null-termination.

5. **NULL-Termination**:  
   The array of words is null-terminated to signal the end of the array.

---

### **Pseudo Code**

```plaintext
FUNCTION ft_split(str):
    Initialize variables for indexing (i, j, k) and word count (wc)
    
    WHILE str[i] is not NULL:
        SKIP spaces, tabs, and new lines
        
        IF a word is found:
            INCREMENT word count (wc)
        
        SKIP the characters that form the word
    
    Allocate memory for the array of words (out)

    Reset i to 0

    WHILE str[i] is not NULL:
        SKIP spaces, tabs, and new lines
        
        Store the start index (j)
        
        SKIP the characters that form the word
        
        IF a word is found:
            Allocate memory for the word in out[k]
            Copy the word into out[k]
            Increment k
    
    NULL terminate the array of words (out[k] = NULL)
    
    RETURN out
```

---

### **Code Explanation**

- **Helper Function (`ft_strncpy`)**:  
   The `ft_strncpy` function is used to copy a portion of the input string (from the start of a word to the end) into a new string. This function ensures that the copied string is null-terminated.

- **Main Function (`ft_split`)**:  
   The main function counts the number of words in the string by skipping delimiters (spaces, tabs, and new lines). It then allocates memory for the resulting array of strings and copies each word into the array.

   - The first loop counts how many words are in the string.
   - The second loop extracts each word and stores it in the array.
   - Each word is dynamically allocated space using `malloc`.

- **Memory Management**:  
   Memory for each word is allocated separately, and the array of words is null-terminated. If memory allocation fails, the function returns `NULL`.

---

### **Example**

```c
#include <stdio.h>

int main(void) {
    char *str = "Hello world 42 School";
    char **result = ft_split(str);
    
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i + 1, result[i]);
    }
    
    // Free the allocated memory
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
    
    return 0;
}
```

### **Expected Output**

```plaintext
Word 1: Hello
Word 2: world
Word 3: 42
Word 4: School
```
