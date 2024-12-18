# Exercise: print_bits

## Description

The goal of this exercise is to write a function that takes a single byte (8 bits) as input and prints its binary representation **without a newline**.

---

## Function Prototype

```c
void print_bits(unsigned char octet);
```

---

## Program Rules

1. The input is a single byte represented as an `unsigned char`.
2. Print the **binary representation** of the byte from **most significant bit** to **least significant bit**.
3. **No newline (`\n`)** is printed at the end.
4. Use only the `write` function for output.

---

## Code Implementation

Here is the implementation:

```c
#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;                 // To iterate through each bit
    unsigned char bit;

    i = 8;                 // Total bits in a byte
    while (i--)
    {
        bit = (octet >> i & 1) + '0'; // Extract the i-th bit and convert it to '0' or '1'
        write(1, &bit, 1);
    }
}
```

---

## Explanation of the Code

### Key Concepts

1. **Bit Shifting**:
   - To isolate each bit in the byte, we shift the bits of `octet` to the right using `>>` and check the least significant bit.

   Example:
   ```
   00000010 (2 in binary)
   octet >> 7 → 00000000 (check most significant bit)
   octet >> 6 → 00000000
   ...
   octet >> 1 → 00000001
   octet >> 0 → 00000010 & 1 → 1
   ```

2. **AND Operation (`&`)**:
   - The `& 1` operation ensures we check only the least significant bit after shifting.

3. **Output Using `write`**:
   - Each bit is printed as either `'0'` or `'1'`.

4. **No Newline**:
   - The function does not append a newline, as per the assignment requirements.

---

## Breakdown of Steps

1. **Initialize `i` to 8**:
   - There are 8 bits in a byte.

2. **Iterate Through Each Bit**:
   - Use a `while` loop to process the bits one at a time.

3. **Extract the Bit**:
   - Use `octet >> i` to shift bits to the right.
   - Apply `& 1` to isolate the current bit.

4. **Convert to Character**:
   - Add `'0'` to convert the bit (0 or 1) into its ASCII character equivalent.

5. **Print the Bit**:
   - Use `write(1, &bit, 1)` to output each bit.

---

## Example Usage

### Example 1: Passing `2`

**Input:**
```c
print_bits(2);
```

**Output:**
```
00000010
```

---

### Example 2: Passing `255`

**Input:**
```c
print_bits(255);
```

**Output:**
```
11111111
```

---

### Example 3: Passing `0`

**Input:**
```c
print_bits(0);
```

**Output:**
```
00000000
```

---

## Edge Cases

1. **Input `0`**:
   - All bits are `0`.

2. **Input `255`**:
   - All bits are `1`.

3. **Random Values**:
   - The function handles all possible values from `0` to `255` (range of `unsigned char`).

---

## Compilation and Execution

To compile the code:

```bash
cc -Wall -Wextra -Werror print_bits.c
```

To test the function:

```c
#include <unistd.h>

void print_bits(unsigned char octet);

int main(void)
{
    print_bits(2);  // Test with the number 2
    write(1, "\n", 1);
    print_bits(255); // Test with the number 255
    write(1, "\n", 1);
    print_bits(0);  // Test with the number 0
    write(1, "\n", 1);
    return (0);
}
```

**Output:**
```
00000010
11111111
00000000
```