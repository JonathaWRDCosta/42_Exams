# Exercise: print_bits

## Description

Assignment name  : print_bits  
Expected files   : print_bits.c  
Allowed functions: write  

---------------------------------------------------------------

Write a function that takes a byte (an unsigned char) and prints its binary representation without a newline at the end.

### Function Prototype:

```c
void print_bits(unsigned char octet);
```

### Parameters:
- **octet**: An unsigned char (a byte) that you want to print in binary.

### Requirements:
- The function should print the binary representation of the given byte (`octet`).
- No newline should be printed at the end.
- Each byte should be printed as a sequence of 8 bits, with leading zeros if necessary.

### Example:

For the input `2` (which is `00000010` in binary), the output should be:
```
00000010
```

---

## Function Behavior

1. **Input**:
   - `octet`: A single byte (`unsigned char`), which is an 8-bit value. It can range from `0` to `255`.

2. **Output**:
   - The function should output the binary representation of the `octet` parameter.

3. **Edge Cases**:
   - Ensure that the binary output includes all 8 bits, even if the value is smaller than 128 (e.g., `1` should be printed as `00000001`).

---

## Pseudo Code

```
START
    Initialize a loop from 7 to 0 (8 bits)
    For each bit, shift the byte (octet) right by the current index
    AND it with 1 to get the current bit value (0 or 1)
    Convert the bit value to '0' or '1' character
    Print the character using write
END
```

---

## Code Explanation

1. **Bitwise operations**:
   - The function uses a loop that iterates through the 8 bits of the `octet` byte. It checks each bit by shifting the byte right and performing a bitwise AND operation with `1` (`octet >> i & 1`).
   - This operation extracts the bit at position `i` and converts it to either `0` or `1` by adding `'0'` to the result.

2. **Writing the output**:
   - Each bit is written to the output using the `write` function, ensuring no newline is appended.

3. **Efficiency**:
   - This approach ensures that we print all 8 bits, including leading zeros, without using extra functions like `printf`.
