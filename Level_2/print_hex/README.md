# **Assignment Name**: print_hex

**Expected Files**: `print_hex.c`  
**Allowed Functions**: `write`

---

## **Description**

Write a program that takes a positive (or zero) number expressed in base 10 and displays it in base 16 (lowercase letters) followed by a newline.

- If the number of parameters is not 1, the program should display a newline.
- If the input is a valid integer, the program should output its hexadecimal representation.

---

## **Input**

- The program takes exactly one argument, a number in base 10 (a positive integer or zero).
- If the number of parameters is not 1, the program outputs a newline and exits.

---

## **Output Format**

- The program displays the input number in base 16 (lowercase letters).
- The output is followed by a newline.

---

## **Function Prototype**

```c
int main(int argc, char *argv[]);
```

---

## **Program Behavior**

1. **Argument Handling**:
   - If the program receives exactly one argument, the program proceeds to convert the argument to an integer.
   - If the number of arguments is not 1, it simply prints a newline and exits.

2. **Conversion to Integer**:
   - The program uses a helper function `ft_atoi` to convert the input string to an integer.

3. **Hexadecimal Conversion**:
   - The program then calls a recursive function `ft_print_hex` to print the number in hexadecimal (base 16).
   - The hexadecimal representation is printed using the characters from the string `0123456789abcdef`.

4. **Output**:
   - The program prints the hexadecimal value of the integer in base 16, followed by a newline.

---

## **Pseudo Code**

```plaintext
START

    # Step 1: Check if the number of arguments is valid
    IF the number of arguments (argc) is NOT 2:
        PRINT a newline
        EXIT the program
    
    # Step 2: Convert the argument (string) to an integer (base 10)
    DEFINE a variable n
    CALL the function ft_atoi with the argument argv[1] to convert the string to an integer
    STORE the result in n
    
    # Step 3: Print the number in hexadecimal format
    CALL the function ft_print_hex with n as the argument
    
    # Step 4: Print a newline after the output
    PRINT a newline

END


# Function: ft_atoi (Converts a string to an integer)
START ft_atoi(string):
    DEFINE variables:
        i = 0  # Index for string
        sign = 1  # To handle negative numbers
        res = 0  # Resulting number

    # Step 1: Skip any leading spaces
    WHILE the current character in string is a space or a control character (tab, newline, etc.):
        INCREMENT i

    # Step 2: Check for the sign
    IF the current character is a minus sign ('-'):
        SET sign to -1
        INCREMENT i
    ELSE IF the current character is a plus sign ('+'):
        INCREMENT i

    # Step 3: Convert the remaining characters to a number
    WHILE the current character in string is a digit (0-9):
        UPDATE res = res * 10 + the digit value of the current character
        INCREMENT i
    
    # Step 4: Return the result multiplied by the sign (to account for negative numbers)
    RETURN res * sign

END ft_atoi


# Function: ft_print_hex (Prints the integer in hexadecimal format)
START ft_print_hex(n):
    # Step 1: Define a string for hexadecimal digits
    DEFINE hex_digit = "0123456789abcdef"

    # Step 2: Base case: If n is less than 16, print the corresponding hexadecimal character
    IF n < 16:
        PRINT hex_digit[n]
    ELSE:
        # Step 3: Recursive case: Print higher-order digits first (divide n by 16)
        CALL ft_print_hex(n / 16)  # Recursive call with the quotient
        
        # Step 4: Print the current digit (remainder of n divided by 16)
        PRINT hex_digit[n % 16]

END ft_print_hex
```

---

## **Code Explanation**

1. **Argument Handling**:
   - The program first checks whether there is exactly one argument provided.
   - If not, it simply prints a newline and exits.

2. **Integer Conversion**:
   - The input string is converted to an integer using the `ft_atoi` function.

3. **Hexadecimal Conversion**:
   - The `ft_print_hex` function is a recursive function that prints the number in hexadecimal format.
   - If the number is less than 16, it prints the corresponding character.
   - If the number is 16 or more, it recursively divides the number by 16, printing the hexadecimal digits from the highest to the lowest.

4. **Final Output**:
   - The program prints the hexadecimal value and ends by printing a newline.

---

## **Examples**

```bash
$> ./print_hex 10 | cat -e
a$
$> ./print_hex 255 | cat -e
ff$
$> ./print_hex 5156454 | cat -e
4eae66$
$> ./print_hex | cat -e
$
```
