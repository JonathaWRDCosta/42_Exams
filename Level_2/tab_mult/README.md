# Exercise: tab_mult

## Description

The task is to write a program that displays the multiplication table of a given number from 1 to 9. The number is passed as a command-line argument. If no argument is provided, the program should print only a newline.

### Requirements:
- The input number is guaranteed to be a strictly positive integer that fits in an `int`. 
- Additionally, the result of multiplying the number by 9 must also fit in an `int`.

### Output:
The output should display the multiplication table in the format:  
`1 x N = Result`  
`2 x N = Result`  
...  
`9 x N = Result`

If no argument is provided, the program outputs a single newline.

### Examples:

#### Example 1:
Input: `./tab_mult 9`  
Output:
```
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
```

#### Example 2:
Input: `./tab_mult 19`  
Output:
```
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
```

#### Example 3:
Input: `./tab_mult`  
Output:
```
(empty line)
```

---

## Solution

### Step 1: Handle Input

- The program checks if exactly one argument is passed. If the number of arguments is not 2 (program name + one argument), it prints a newline and exits.

- If a valid argument is provided, the string argument is converted to an integer using a custom `ft_atoi` function.

### Step 2: Generate and Print the Multiplication Table

- The program loops from `1` to `9` and calculates the product of the current loop variable (`i`) with the given number (`nbr`).
- For each iteration, the program prints the multiplication statement in the required format (`i x N = Result`), using the custom `ft_putnbr` function for number printing.

---

## Code Explanation:

Here is the complete code:

```c
#include <unistd.h>

int ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))  // Skip whitespace
		str++;
	if (*str == '+')  // Skip '+' if present
		str++;
	while (*str >= '0' && *str <= '9')  // Build integer from digits
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);  // Return the converted integer
}

void ft_putchar(char c)
{
	write(1, &c, 1);  // Print a single character
}

void ft_putnbr(int nb)
{
	if (nb / 10 > 0)  // Recursively print all digits except the last
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');  // Print the last digit
}

int main(int argc, char *argv[])
{
	int i;
	int nbr;

	if (argc != 2)  // Check if the correct number of arguments is passed
		return (write(1, "\n", 1));  // Print a newline if no number is provided
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);  // Convert the input string to an integer
		while (i <= 9)  // Generate multiplication table from 1 to 9
		{
			ft_putnbr(i);  // Print the multiplier (1 to 9)
			write(1, " x ", 3);  // Print ' x '
			ft_putnbr(nbr);  // Print the input number
			write(1, " = ", 3);  // Print ' = '
			ft_putnbr(i * nbr);  // Print the result of the multiplication
			write(1, "\n", 1);  // Print a newline
			i += 1;  // Increment the multiplier
		}
	}
	return (0);  // Exit the program
}
```

---

## Functions Used:

### 1. `ft_atoi`:
This function converts a string to an integer. It:
- Skips whitespace characters.
- Reads numeric digits and calculates their integer value.
- Returns the integer equivalent of the input string.

### 2. `ft_putchar`:
This helper function writes a single character to the standard output using the `write` system call.

### 3. `ft_putnbr`:
This function prints an integer to the standard output. It:
- Uses recursion to print all digits of the number except the last one.
- Prints the last digit using `ft_putchar`.

### 4. `main`:
The main function:
- Validates input arguments.
- Converts the input string to an integer using `ft_atoi`.
- Loops from 1 to 9 to print the multiplication table using `ft_putnbr` and formatting strings with `write`.

---

## Concepts Covered:

- **String to Integer Conversion**: The program uses a custom `ft_atoi` function to convert the string input to an integer.
  
- **Recursion**: The `ft_putnbr` function uses recursion to print all digits of a number.

- **Flow Control**: The program handles input validation by checking the number of arguments and ensuring correct execution only for valid inputs.

- **ASCII Manipulation**: The `ft_putnbr` function uses ASCII math to convert integer digits to their corresponding character values.

- **Output Formatting**: The program carefully formats the output using `write` to print the multiplication table in the required format.