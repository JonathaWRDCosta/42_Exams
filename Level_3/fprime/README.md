# Exercise: fprime

## Description

Assignment name  : fprime  
Expected files   : fprime.c  
Allowed functions: printf, atoi  
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the standard output, followed by a newline.

Factors must be displayed in ascending order and separated by `*`, so that the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:
```console
$> ./fprime 225225 | cat -e  
3*3*5*5*7*11*13$  
$> ./fprime 8333325 | cat -e  
3*3*5*5*7*11*13*37$  
$> ./fprime 9539 | cat -e  
9539$  
$> ./fprime 804577 | cat -e  
804577$  
$> ./fprime 42 | cat -e  
2*3*7$  
$> ./fprime 1 | cat -e  
1$  
$> ./fprime | cat -e  
$  
$> ./fprime 42 21 | cat -e  
$
```
### Expected Output Format

- If the input number is valid and greater than `1`, display its prime factors separated by `*`.
- If the input number is `1`, display `1`.
- If the number of arguments is not exactly one or the input is invalid, display a newline.

---

## Function Prototype

```c
int main(int argc, char *argv[]);
```

---

## Program Behavior

1. **Argument Check**:
   - The program first checks if exactly one argument is provided. If there are no arguments or more than one, it outputs a newline and terminates.

2. **Handling Special Case (`1`)**:
   - If the input number is `1`, the program immediately outputs `1` as `1` has no prime factors.

3. **Prime Factorization**:
   - Starting with the smallest prime factor `2`, the program divides the input number by each potential divisor, checking for divisibility.
   - If a divisor divides the number, it is a prime factor, and the program prints it. After printing each factor, the number is divided by the factor, and the process continues with the next possible divisor.
   - The program ensures that all prime factors are printed in ascending order. If the number is prime itself, it is printed without a `*` following it.

4. **Output Formatting**:
   - Prime factors are displayed in ascending order, separated by `*`.
   - After the last prime factor, no additional `*` is printed, ensuring correct output formatting.

5. **End Output**:
   - After displaying all prime factors or handling the special case for `1`, the program prints a newline (`\n`) to conclude the output.

---

## Pseudo Code

```
START
    IF the number of arguments (argc) is NOT 2 THEN
        PRINT a newline
        EXIT the program
    END IF

    CONVERT the argument (argv[1]) to an integer (number)

    IF the number is 1 THEN
        PRINT "1"
        EXIT the program
    END IF

    INITIALIZE i to 1 (starting value before the first increment)

    WHILE the number is greater than or equal to (i + 1) DO
        INCREMENT i by 1
        
        IF the number is divisible by i (number % i == 0) THEN
            PRINT i
            IF the number equals i (number == i) THEN
                EXIT the program
            END IF
            PRINT "*"
            DIVIDE the number by i (number /= i)
            RESET i to 1 (start checking from the smallest prime)
        END IF
    END WHILE

    PRINT a newline to end the output
END

```

---

## Code Explanation

1. **Argument Handling**:
   - The program verifies that exactly one argument is provided. If the number of arguments is incorrect, it prints a newline.

2. **Special Case for `1`**:
   - If the input is `1`, the program immediately prints `1` because `1` has no prime factors.

3. **Prime Factor Calculation**:
   - The program begins checking from `i = 2` (the smallest prime) to find factors.
   - If `i` divides the number without a remainder, it is considered a prime factor, and the number is divided by `i`. The process repeats until all factors are found.
   
4. **Formatted Output**:
   - The prime factors are printed in ascending order, separated by `*`, with no trailing `*` after the last factor.
   - If no prime factors exist (for input `1`), the program prints `1`.

5. **Final Newline**:
   - At the end of the program, a newline character is printed to ensure proper formatting of the output.
