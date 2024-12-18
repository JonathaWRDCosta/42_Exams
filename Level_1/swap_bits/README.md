# Exercise: swap_bits

## Description

Assignment name  : swap_bits  
Expected files   : swap_bits.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that takes a byte, swaps its halves (as shown in the example), and returns the result.

### Function Prototype:

```c
unsigned char swap_bits(unsigned char octet);
```

### Parameters:
- **octet**: An unsigned character (byte) whose halves will be swapped.

### Requirements:
- The function should swap the two halves of the byte (8 bits). Specifically, it should swap the first 4 bits with the last 4 bits.
- The result should be returned as the modified byte.

### Example:

For the input byte `01000001` (in binary):
- The first half (`0100`) and second half (`0001`) should be swapped.
- The resulting byte would be `00010100` (in binary).

---

## Function Behavior

1. **Input**:
   - The input is a single byte (`octet`), represented as an unsigned char.
   - The byte is represented in 8 bits.

2. **Output**:
   - The function returns a new byte, where the first 4 bits and the last 4 bits of the input byte have been swapped.

3. **Edge Handling**:
   - Since the function is only manipulating a single byte, the range of valid inputs is limited to values between 0 and 255 (i.e., 0x00 to 0xFF in hexadecimal).
   - No need to handle empty or invalid inputs.

---

## Pseudo Code

```
START
    Shift the first 4 bits of the byte to the right (octet >> 4)
    Shift the last 4 bits of the byte to the left (octet << 4)
    Use the OR operator to combine the two shifted values
    Return the result
END
```

---

## Code Explanation

1. **Bit Manipulation**:
   - The first half of the byte is obtained by shifting the byte 4 bits to the right (`octet >> 4`).
   - The second half of the byte is obtained by shifting the byte 4 bits to the left (`octet << 4`).
   - These two results are then combined using the bitwise OR operator (`|`), which effectively swaps the halves of the byte.

2. **Output**:
   - The function returns the modified byte with the halves swapped.
