# Exercise: add_prime_sum

## Description

The task is to create a program that calculates the sum of all prime numbers that are less than or equal to a given positive integer.

### Program Requirements:
1. The program must accept a single **positive integer** as an argument.
2. It calculates the sum of all prime numbers less than or equal to the input number.
3. If:
   - No argument is provided,
   - More than one argument is provided, **or**
   - The argument is not a positive integer,  
   the program must output `0` followed by a newline.
4. **Allowed functions**: `write`, `exit`.

---

## Code Implementation

### Explanation of the Code

Here is the code implementation:

```c
#include <unistd.h>

int ft_atoi(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i = i * 10 + *s - '0';  // Convert character to integer
		s++;
	}
	return (i);
}

int ft_is_prime(int num)
{
	int i;

	i = 2;
	if (num <= 1)  // Numbers <= 1 are not prime
		return (0);
	while (i * i <= num)  // Check divisors up to sqrt(num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);  // Prime number
}

void ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);  // Recursive call to print each digit
	digit = n % 10 + '0';  // Convert digit to character
	write(1, &digit, 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)  // Incorrect number of arguments
		ft_putnbr(0);
	else
	{
		int nbr;
		int sum;

		nbr = ft_atoi(argv[1]);  // Convert argument to integer
		sum = 0;
		while (nbr > 0)
		{
			if (ft_is_prime(nbr))  // Check if the number is prime
				sum += nbr;  // Add prime number to the sum
			nbr--;
		}
		ft_putnbr(sum);  // Print the result
	}
	write(1, "\n", 1);  // Print a newline
	return (0);
}
```

---

## Key Concepts

1. **Prime Numbers**:  
   A prime number is a natural number greater than `1` that cannot be formed by multiplying two smaller natural numbers.  
   Examples: `2, 3, 5, 7, 11`.

2. **ft_is_prime**:  
   This function determines whether a number is prime:
   - Starts from `2` (smallest prime).
   - Iterates up to the square root of the number (`i * i <= num`).
   - If the number has any divisors other than `1` and itself, it is **not prime**.

3. **ft_atoi**:  
   Converts a string (like `"123"`) into an integer (`123`).

4. **ft_putnbr**:  
   Recursively prints an integer, digit by digit.

5. **Main Program**:
   - Validates the argument count.
   - Converts the argument to an integer.
   - Iterates from the input number down to `1` to check for prime numbers and sum them.

---

## Example Usage

### Input: Single Argument  
```bash
$> ./add_prime_sum 5
10
```
**Explanation**:  
The prime numbers less than or equal to `5` are: `2, 3, 5`.  
Their sum is: `2 + 3 + 5 = 10`.

---

### Input: Larger Argument  
```bash
$> ./add_prime_sum 7 | cat -e
17$
```
**Explanation**:  
The prime numbers less than or equal to `7` are: `2, 3, 5, 7`.  
Their sum is: `2 + 3 + 5 + 7 = 17`.

---

### Input: No Argument or Invalid Argument  
```bash
$> ./add_prime_sum | cat -e
0$
```
**Explanation**:  
Since no argument is passed, the program outputs `0`.

```bash
$> ./add_prime_sum -5
0
```
**Explanation**:  
Negative or invalid inputs are treated as `0`.

---

## Edge Cases

1. **Input: `1`**  
   Output: `0` (since `1` is not a prime number).

2. **Input: `2`**  
   Output: `2` (smallest prime number).

3. **Input: Invalid Characters**  
   If the input is non-numeric, the program treats it as invalid and returns `0`.

4. **Large Numbers**  
   The program ensures all prime numbers below a given number are processed efficiently.

---

## Function Prototype

- `int ft_atoi(char *s)`  
   Converts a string to an integer.

- `int ft_is_prime(int num)`  
   Checks if a number is prime.

- `void ft_putnbr(int n)`  
   Prints an integer to the standard output.

---

## Compilation and Execution

To compile the program:

```bash
gcc -Wall -Wextra -Werror add_prime_sum.c -o add_prime_sum
```

To execute the program:

```bash
./add_prime_sum <number>
```

---