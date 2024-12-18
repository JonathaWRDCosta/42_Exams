# Exercise: add_prime_sum

## Description

Assignment name  : add_prime_sum  
Expected files   : add_prime_sum.c  
Allowed functions: write, exit  

---------------------------------------------------------------

Write a program that takes a positive integer as an argument and displays the sum of all prime numbers less than or equal to it, followed by a newline.

If the number of arguments is not exactly 1, or if the argument is not a positive number, the program should display `0` followed by a newline.

### Function Prototypes:

```c
int ft_atoi(char *s);
int ft_is_prime(int num);
void ft_putnbr(int n);
```

### Requirements:
- The program should take one argument, which is a positive integer.
- The program should display the sum of all prime numbers less than or equal to the given integer, followed by a newline (`\n`).
- If the input is not a positive integer or if the number of arguments is incorrect, the program should output `0`.

### Examples:

For the input:

```bash
$> ./add_prime_sum 5
```

The output should be:

```
10
```

For the input:

```bash
$> ./add_prime_sum 7 | cat -e
```

The output should be:

```
17$
```

For the input:

```bash
$> ./add_prime_sum | cat -e
```

The output should be:

```
0$
```

---

## Function Behavior

1. **Input**:
   - The input consists of a single integer passed as a command-line argument.
   - The program should handle cases where there is more than one argument or if the argument is not a valid positive integer.

2. **Prime Number Calculation**:
   - The program calculates the sum of all prime numbers less than or equal to the given integer.
   - The `ft_is_prime` function checks if a number is prime.

3. **Edge Case Handling**:
   - If the number of arguments is not exactly one or the argument is not a valid positive integer, the program should print `0`.

4. **Output**:
   - The program should print the sum of all prime numbers less than or equal to the input number, followed by a newline.

---

## Pseudo Code

```
START
    If the number of arguments is not 1:
        Print 0
        Exit

    Convert the argument to an integer

    Initialize sum to 0
    For each number from the input number down to 2:
        If the number is prime:
            Add the number to sum

    Print the sum
    Print newline
END
```

---

## Code Explanation

1. **ft_atoi**:
   - Converts the input string to an integer. This is used to convert the command-line argument to an integer.

2. **ft_is_prime**:
   - Determines whether a number is prime. It returns `1` if the number is prime and `0` otherwise.

3. **ft_putnbr**:
   - Prints an integer. This function is used to print the sum of prime numbers.

4. **Main Function**:
   - The program first checks if the number of arguments is exactly 1. If not, it prints `0`.
   - Then, it converts the input string to an integer and calculates the sum of all primes less than or equal to the given integer.
   - Finally, it prints the sum followed by a newline.
