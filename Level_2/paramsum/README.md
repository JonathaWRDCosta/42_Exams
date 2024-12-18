## **Assignment: paramsum**

### **Expected Files**:
- `paramsum.c`

### **Allowed Functions**:
- `write`

---

### **Task Description**:
Write a program that displays the number of arguments passed to it, followed by a newline.

If there are no arguments, just display a `0` followed by a newline.

### **Example**:

```bash
$> ./paramsum 1 2 3 5 7 24
6

$> ./paramsum 6 12 24 | cat -e
3$

$> ./paramsum | cat -e
0$
```

---

### **Program Behavior**:

1. **Argument Count**:
   - The program needs to count the number of arguments passed to it (excluding the program name).
   
   - If no arguments are passed, the program outputs `0` followed by a newline.

2. **Display the Argument Count**:
   - The program displays the number of arguments (excluding the program name), followed by a newline.

3. **Output**:
   - The program uses the `write` function to display the result.

---

### **Function Prototype**:

```c
void ft_putnbr(int n);
```

### **Pseudo Code**:

```
START
    IF there are no arguments passed (argc is 1) THEN
        PRINT 0 followed by newline
    ELSE
        PRINT argc - 1 followed by newline
    END IF
END
```

---

### **Code Explanation**:

1. **Argument Handling**:
   - The program receives the argument count (`argc`) and arguments (`argv`).
   
   - It ignores `argv` as it is not used for the task, and focuses only on `argc`.
   
2. **Printing the Argument Count**:
   - The program uses the `ft_putnbr` function to print the number of arguments excluding the program name (`argc - 1`).

3. **Output**:
   - The program uses the `write` function to output the result, followed by a newline.

This task requires a simple use of `argc` to count the arguments and a custom function to print an integer, demonstrating the ability to manipulate input and output in C.
