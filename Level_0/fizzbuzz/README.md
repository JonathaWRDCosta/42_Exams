### **Program Requirements**
1. Print numbers from `1` to `100`, each on a new line.
2. If the number is:
   - A multiple of **3**, print `"fizz"`.
   - A multiple of **5**, print `"buzz"`.
   - A multiple of both **3** and **5**, print `"fizzbuzz"`.
3. Use the `write` function for output.
4. No additional newline or spaces should appear in the output.

---

### **How It Works**

1. **Function `ft_putnbr`**:
   - This helper function converts an integer (`nb`) to its string representation and writes each digit using the `write` function.
   - For numbers greater than or equal to `10`, it recursively divides the number by `10` to extract individual digits.
   - The digits are fetched using modulo (`nb % 10`) and mapped to characters using the `str` array.

2. **Logic in `main()`**:
   - Loops through integers from `1` to `100`:
     - If divisible by both `3` and `5` (i.e., divisible by `15`), write `"fizzbuzz"`.
     - If divisible only by `3`, write `"fizz"`.
     - If divisible only by `5`, write `"buzz"`.
     - Otherwise, call `ft_putnbr` to print the number.
   - A newline is added after each output to ensure the required format.

---

### **Output Example**

For a range of numbers:

```
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
...
97
98
fizz
buzz
```

---

### **Compilation and Execution**

1. **Compile**:
   ```bash
   cc -Wall -Wextra -Werror fizzbuzz.c -o fizzbuzz
   ```

2. **Run**:
   ```bash
   ./fizzbuzz
   ```

---

### **Key Points**
- The program uses **only `write`**, as required.
- It handles all edge cases, including:
  - Printing `"fizzbuzz"` for multiples of both `3` and `5`.
  - Ensuring no additional spaces or newlines.
- Output format is correct, with each entry on a new line.