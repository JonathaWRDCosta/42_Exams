# Exercise: fprime

## Description

Write a program that takes a positive integer as an argument and displays its prime factors in ascending order, separated by `*`. If the input number has no prime factors (e.g., it's `1`), the output should just be `1`.

If the number of arguments is not 1 or if the input is invalid, the program should print just a newline.

### Expected Output Format

- If the input is valid, print the prime factors separated by `*`.
- If the input is `1`, print `1`.
- If no input is provided, print just a newline.

---

## Function Prototype

```c
int main(int argc, char *argv[]);
```

---

## Program Behavior

- If there is exactly one argument:
  - If the number is `1`, print `1`.
  - If the number is greater than `1`, output its prime factors in ascending order, separated by `*`.
- If there are no arguments or more than one argument, print a newline.

---

## Code Implementation

Here’s the implementation of the `fprime.c` program:

```c
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = atoi(argv[1]);  // Convert input argument to integer

		// Special case: if the number is 1
		if (number == 1)
			printf("1");

		// Find prime factors
		while (number >= ++i)
		{
			if (number % i == 0)  // If i divides the number, it's a factor
			{
				printf("%d", i);
				if (number == i)  // If the number equals i, we are done
					break;
				printf("*");  // Print '*' between factors
				number /= i;  // Divide number by the factor
				i = 1;  // Reset i to 1 to start checking from the smallest prime
			}
		}
	}
	// Always print a newline at the end
	printf("\n");
	return (0);
}
```

---

## Explanation of the Code

### `main` Function

1. **Argument Check**:
   - The program checks if exactly one argument is provided (`argc == 2`). If there are no arguments or more than one, it simply prints a newline.

2. **Handling Special Case (`1`)**:
   - If the input is `1`, the program prints `1` immediately, as it has no prime factors.

3. **Finding Prime Factors**:
   - The program starts checking for prime factors beginning from `i = 2` (the smallest prime number).
   - For each value of `i`, it checks if `i` divides the number (`number % i == 0`). If so, `i` is a prime factor, and it's printed.
   - After printing each factor, the program divides the number by `i` (`number /= i`) and resets `i` to `1` to check for further factors.
   - This process continues until the number is reduced to `1`, at which point the loop ends.

4. **Printing the Result**:
   - The prime factors are printed separated by `*`. If there is only one prime factor (the number itself is prime), it will not print a `*` after it.

5. **Output**:
   - After all factors are printed, a newline (`\n`) is printed at the end.

---

## Example Usage

### Example 1: Prime Factorization of `225225`

**Input:**
```bash
./fprime 225225
```

**Output:**
```
3*3*5*5*7*11*13
```

### Example 2: Prime Factorization of `8333325`

**Input:**
```bash
./fprime 8333325
```

**Output:**
```
3*3*5*5*7*11*13*37
```

### Example 3: Prime Factorization of `9539`

**Input:**
```bash
./fprime 9539
```

**Output:**
```
9539
```

### Example 4: Prime Factorization of `42`

**Input:**
```bash
./fprime 42
```

**Output:**
```
2*3*7
```

### Example 5: Input `1`

**Input:**
```bash
./fprime 1
```

**Output:**
```
1
```

### Example 6: No Arguments Provided

**Input:**
```bash
./fprime
```

**Output:**
```
<newline>
```

---

## Compilation and Execution

To compile the program:

```bash
cc -Wall -Wextra -Werror fprime.c -o fprime
```

To test the program:

```bash
./fprime 225225
./fprime 42
```

---

## Summary

The `fprime` program takes a positive integer and displays its prime factors in ascending order, separated by `*`. It handles edge cases like `1` (which has no prime factors) and ensures the correct output format with proper handling of input and output.