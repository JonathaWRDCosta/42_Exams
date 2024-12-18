# Exercise: reverse_bits

## Description

Assignment name  : reverse_bits  
Expected files   : reverse_bits.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that takes a byte (an unsigned char), reverses its bits, and returns the result.

### Function Prototype:

```c
unsigned char reverse_bits(unsigned char octet);
```

### Parameters:
- **octet**: An unsigned char (a byte) that you want to reverse the bits of.

### Requirements:
- The function should reverse the bits of the given byte (`octet`).
- The function should return the resulting byte, which is the reverse of the input byte.

### Example:

For the input `0x41` (which is `01000001` in binary), the output should be:
```
0x82 (which is 10000010 in binary)
```

---

## Function Behavior

1. **Input**:
   - `octet`: A single byte (`unsigned char`), which is an 8-bit value. It can range from `0` to `255`.

2. **Output**:
   - The function should return the byte with its bits reversed.

3. **Edge Cases**:
   - Ensure that the function works for all possible values of `octet` (from `0x00` to `0xFF`), and that it properly reverses the bits.

---

## Pseudo Code

```
START
    Initialize an unsigned char result to 0
    Iterate 8 times (for each bit in the byte):
        Extract the least significant bit of octet
        Shift the result to the left by 1
        Add the extracted bit to the result
        Shift the octet to the right by 1
    Return the result
END
```

---

## Code Explanation

1. **Bitwise operations**:
   - We iterate 8 times (one for each bit of the byte).
   - In each iteration:
     - We extract the least significant bit of `octet` using `octet % 2`.
     - We shift the result to the left (`res = res * 2`), making room for the next bit.
     - We add the extracted bit to the result (`res = res * 2 + (octet % 2)`).
     - We shift the `octet` to the right by 1 bit (`octet = octet / 2`).

2. **Return the result**:
   - After all bits have been processed, the function returns `res`, which contains the reversed bits of the original `octet`.
