# **Assignment Name**: tab_mult

**Expected Files**: `tab_mult.c`  
**Allowed Functions**: `write`

---

## **Description**

Write a program that displays the multiplication table of a given number.

- The parameter passed will always be a strictly positive integer that fits within the range of an `int`. Additionally, the result of the multiplication (`number * 9`) will also fit within the range of an `int`.
- If no parameters are provided, the program should output only a newline.

---

## **Input**

- The program accepts a single integer argument passed via the command line.
- If no argument is passed, the program will output a newline.

---

## **Output Format**

- For a given input number `n`, the program should display the multiplication table for `n` from `1` to `9`. Each line should be formatted as follows:
  - `i x n = result`
  - Where `i` ranges from 1 to 9, `n` is the input number, and `result` is the product of `i` and `n`.
- The output should be printed one line for each multiplication.
- If no input is provided, a newline is printed.

---

## **Function Prototype**

```c
int main(int argc, char **argv);
int ft_atoi(char *str);
void ft_putchar(char c);
void ft_putnbr(int nb);
```

---

## **Program Behavior**

1. **Argument Handling**:
   - If no arguments are passed (`argc != 2`), the program outputs just a newline.
   - If an argument is passed, the program processes the given number and prints its multiplication table.

2. **Multiplication Logic**:
   - The program multiplies the number by each of the integers from 1 to 9 and prints the result in the format: `i x n = result`.

3. **Output**:
   - After processing the multiplication table, the program prints each line with the format `i x n = result`.
   - If no arguments are provided, the program just outputs a newline.

---

## **Pseudo Code**

```plaintext
START

    # Step 1: Check if the number of arguments is valid
    IF argc != 2:
        PRINT a newline
        EXIT the program

    # Step 2: Convert the argument (string) to an integer
    CALL ft_atoi with argv[1] as the parameter
    STORE the result in variable nbr

    # Step 3: Loop through the range of 1 to 9
    FOR i from 1 to 9:
        PRINT i
        PRINT " x "
        PRINT nbr
        PRINT " = "
        PRINT (i * nbr)
        PRINT a newline

END


# Function: ft_atoi (Converts a string to an integer)
START ft_atoi(str):
    INITIALIZE sign = 1
    INITIALIZE result = 0

    # Step 1: Skip leading spaces and tabs
    WHILE str points to a space or tab:
        INCREMENT str

    # Step 2: Handle the '+' sign (if present)
    IF str points to a '+' sign:
        INCREMENT str

    # Step 3: Convert digits to number
    WHILE str points to a digit:
        result = result * 10 + (digit value of str)
        INCREMENT str

    # Step 4: Return the result
    RETURN result * sign

END ft_atoi


# Function: ft_putchar (Prints a character to the screen)
START ft_putchar(c):
    WRITE c to standard output

END ft_putchar


# Function: ft_putnbr (Prints an integer to the screen)
START ft_putnbr(nb):
    IF nb is greater than or equal to 10:
        CALL ft_putnbr with nb / 10
    PRINT the last digit (nb % 10) to the screen

END ft_putnbr
```

---

## **Code Explanation**

1. **Argument Handling**:
   - The `main` function first checks if exactly one argument is passed (other than the program name). If not, it prints a newline and exits.
   - If an argument is provided, it uses `ft_atoi` to convert the argument (a string) into an integer.

2. **Multiplication Logic**:
   - A loop runs from 1 to 9, multiplying the input number (`nbr`) by each of these integers.
   - For each iteration, it prints the result in the format: `i x nbr = i * nbr`, where `i` is the loop counter and `nbr` is the user input.

3. **Helper Functions**:
   - `ft_atoi`: This function converts a string to an integer, handling optional leading whitespace and the positive sign.
   - `ft_putchar`: A simple function to write a single character to standard output.
   - `ft_putnbr`: This function prints an integer. It recursively prints each digit, starting from the leftmost digit.

---

## **Examples**

### Example 1:

```bash
$> ./tab_mult 9
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

- The program prints the multiplication table for `9` from `1 x 9 = 9` to `9 x 9 = 81`.

### Example 2:

```bash
$> ./tab_mult 19
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

- The program prints the multiplication table for `19` from `1 x 19 = 19` to `9 x 19 = 171`.

### Example 3:

```bash
$> ./tab_mult | cat -e
$
```

- No arguments are provided, so the program outputs just a newline.
