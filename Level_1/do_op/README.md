# Exercise: do_op

## Description

Assignment name  : do_op  
Expected files   : *.c, *.h  
Allowed functions: atoi, printf, write  
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and third strings represent base-10 signed integers that fit in an `int`.
- The second string is an arithmetic operator chosen from: `+`, `-`, `*`, `/`, `%`.

The program must display the result of the requested arithmetic operation, followed by a newline. If the number of parameters is not 3, the program should just display a newline.

### Notes:
- The program assumes the input strings are valid and well-formed.
- Negative numbers in the input or output will have one and only one leading '-'.
- The result of the operation fits within an `int`.

### Examples:

```bash
$> ./do_op "123" "*" 456 | cat -e
56088$

$> ./do_op "9828" "/" 234 | cat -e
42$

$> ./do_op "1" "+" "-43" | cat -e
-42$

$> ./do_op | cat -e
$
```

### Expected Output Format

- If exactly three arguments are provided, the program computes the result of the operation (sum, difference, multiplication, division, or modulo) and displays it.
- If the number of arguments is not 3, the program displays a newline.

---

## Function Prototype

```c
int main(int argc, char *argv[]);
```

---

## Program Behavior

1. **Argument Handling**:
   - The program checks if there are exactly three arguments passed (`argc == 4`). If not, it prints a newline and exits.
   
2. **Arithmetic Operations**:
   - The program checks the operator passed in the second argument and performs the corresponding arithmetic operation:
     - If the operator is `+`, it adds the two integers.
     - If the operator is `-`, it subtracts the second integer from the first.
     - If the operator is `*`, it multiplies the two integers.
     - If the operator is `/`, it divides the first integer by the second.
     - If the operator is `%`, it calculates the remainder of dividing the first integer by the second.

3. **Output**:
   - The result of the operation is printed using `printf`.
   - A newline is printed after the result.

---

## Pseudo Code

```
START
    IF the number of arguments (argc) is NOT 4 THEN
        PRINT a newline
        EXIT the program
    END IF

    IF the operator is "+" THEN
        PRINT the sum of the first and third arguments
    ELSE IF the operator is "-" THEN
        PRINT the difference between the first and third arguments
    ELSE IF the operator is "*" THEN
        PRINT the product of the first and third arguments
    ELSE IF the operator is "/" THEN
        PRINT the quotient of the first argument divided by the third
    ELSE IF the operator is "%" THEN
        PRINT the remainder of the division of the first argument by the third
    END IF

    PRINT a newline
END
```

---

## Code Explanation

1. **Argument Check**:
   - The program first checks if exactly three arguments are passed. If not, it prints a newline.

2. **Operation Execution**:
   - The program evaluates the operator provided in the second argument and performs the corresponding arithmetic operation on the first and third arguments using the `atoi` function to convert the string arguments into integers.

3. **Output**:
   - The result of the operation is printed using `printf`, followed by a newline.
