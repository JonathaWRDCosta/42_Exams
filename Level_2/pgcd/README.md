## **Assignment: pgcd**

### **Expected Files**:
- `pgcd.c`

### **Allowed Functions**:
- `printf`
- `atoi`
- `malloc`
- `free`

---

### **Task Description**:
Write a program that takes two strings representing two strictly positive integers that fit within an `int` and displays their **highest common divisor** (HCD) followed by a newline.

If the number of parameters is not 2, the program should display just a newline.

### **Example**:

```bash
$> ./pgcd 42 10 | cat -e
2$

$> ./pgcd 42 12 | cat -e
6$

$> ./pgcd 14 77 | cat -e
7$

$> ./pgcd 17 3 | cat -e
1$

$> ./pgcd | cat -e
$
```

---

### **Program Behavior**:

1. **Argument Check**:
   - The program first checks if the number of arguments passed is exactly 2.
   
   - If the number of arguments is not 2, the program simply prints a newline and exits.

2. **Conversion of Strings to Integers**:
   - The program uses the `atoi` function to convert the string representations of the numbers into integers.
   
   - It then checks that both integers are strictly positive (greater than 0).

3. **Calculation of the HCD**:
   - If the two numbers are strictly positive, the program calculates their highest common divisor (HCD) using the subtraction method (Euclidean algorithm):
     - While the two numbers are not equal, subtract the smaller number from the larger one.
   
   - When the numbers are equal, that value is the **HCD** of the two numbers.

4. **Output**:
   - The program displays the calculated **HCD** followed by a newline using `printf`.

---

### **Function Prototype**:

```c
int main(int argc, char const *argv[]);
```

---

### **Pseudo Code**:

```
START
    IF the number of arguments (argc) is not 3 THEN
        PRINT newline
        EXIT
    END IF
    
    Convert argv[1] to integer nbr1
    Convert argv[2] to integer nbr2

    IF nbr1 and nbr2 are both strictly positive THEN
        WHILE nbr1 is not equal to nbr2:
            IF nbr1 > nbr2 THEN
                nbr1 = nbr1 - nbr2
            ELSE
                nbr2 = nbr2 - nbr1
        END WHILE
        PRINT nbr1 (which is the HCD)
    END IF

    PRINT newline
END
```

---

### **Code Explanation**:

1. **Argument Handling**:
   - The program checks if exactly two arguments are passed.
   - If not, it simply outputs a newline and exits.

2. **Conversion to Integers**:
   - The program uses `atoi` to convert the argument strings to integers `nbr1` and `nbr2`.
   
   - It then ensures both integers are strictly positive.

3. **Euclidean Algorithm (Subtraction Method)**:
   - The program calculates the HCD by repeatedly subtracting the smaller number from the larger one, until both numbers are equal. At that point, the common value is the **HCD**.

4. **Output**:
   - Finally, the program prints the HCD followed by a newline using `printf`.

This program demonstrates the implementation of the Euclidean algorithm to calculate the **HCD** of two numbers, with careful attention to input validation.
