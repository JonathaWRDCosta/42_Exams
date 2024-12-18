## **ft_itoa**

**Assignment name**: ft_itoa  
**Expected files**: `ft_itoa.c`  
**Allowed functions**: `malloc`  

---

### **Description**

In this task, you are asked to write a function that converts an integer to a null-terminated string. The function should return the resulting string in a dynamically allocated `char` array.

### **Expected Output Format**

The function should return the string representation of the integer in a null-terminated character array.

For example:
- `ft_itoa(123)` should return the string `"123"`.
- `ft_itoa(-42)` should return the string `"-42"`.
- `ft_itoa(0)` should return the string `"0"`.

---

### **Function Prototypes**

```c
char *ft_itoa(int nbr);
```

---

### **Program Behavior**

1. **Integer to String Conversion**:  
   The function should convert an integer to its corresponding string representation, considering the possible negative sign if the number is negative.
   
2. **Dynamic Memory Allocation**:  
   The resulting string should be stored in dynamically allocated memory. Make sure to allocate enough space for the integer string representation and the null terminator.

3. **Edge Cases**:  
   Handle the special case where the number is `0` (which should return `"0"`), and manage negative integers correctly.

---

### **Pseudo Code**

```plaintext
FUNCTION ft_len(nbr):
    SET i = 0
    IF nbr is 0:
        RETURN 1
    WHILE nbr is not 0:
        nbr = nbr / 10
        Increment i by 1
    RETURN i

FUNCTION ft_abs(nbr):
    IF nbr < 0:
        RETURN -nbr
    ELSE:
        RETURN nbr

FUNCTION ft_itoa(nbr):
    SET i = 0
    SET len = ft_len(nbr)
    IF nbr is negative:
        Increment i by 1
    SET len = len + i
    ALLOCATE memory for c_num of size len + 1
    IF memory allocation fails:
        RETURN NULL
    IF nbr is negative:
        SET c_num[0] = '-'
    SET c_num[len] = '\0'
    WHILE (len - 1) >= i:
        SET c_num[len - 1] = ft_abs(nbr % 10) + '0'
        nbr = nbr / 10
        Decrement len
    RETURN c_num
```

---

### **Code Explanation**

- **`ft_len` Function**: This function calculates the number of digits in the integer. It works by repeatedly dividing the number by 10 until it reaches 0.
  
- **`ft_abs` Function**: This function returns the absolute value of an integer. It handles negative integers by returning their positive counterpart.

- **`ft_itoa` Function**: This is the main function. It:
  - Calculates the length of the integer string representation.
  - Allocates enough memory to hold the resulting string.
  - Handles negative integers by adding a minus sign at the beginning.
  - Converts each digit of the integer to a character and fills the string from right to left.
  - Adds a null terminator at the end.

---

### **Examples**

```c
// Example 1:
char *result = ft_itoa(123);
// Output: "123"

// Example 2:
char *result = ft_itoa(-42);
// Output: "-42"

// Example 3:
char *result = ft_itoa(0);
// Output: "0"
```
