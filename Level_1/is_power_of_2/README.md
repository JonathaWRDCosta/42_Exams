# Exercise: is_power_of_2

## Description

Assignment name  : is_power_of_2  
Expected files   : is_power_of_2.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

The function should return:

- **1** if the given number is a power of 2.
- **0** if the number is not a power of 2.

### Example:

```c
is_power_of_2(1)  // returns 1
is_power_of_2(2)  // returns 1
is_power_of_2(3)  // returns 0
is_power_of_2(16) // returns 1
is_power_of_2(0)  // returns 0
```

---

## Function Prototype

```c
int is_power_of_2(unsigned int n);
```

---

## Program Behavior

1. **Input**:
   - The function takes a single argument, `n`, which is an unsigned integer.
   
2. **Checking if `n` is a power of 2**:
   - A number is a power of 2 if it has exactly one '1' bit in its binary representation. For example:
     - `1` in binary: `0001`
     - `2` in binary: `0010`
     - `4` in binary: `0100`
     - `8` in binary: `1000`
   
3. **Method**:
   - The function uses a bitwise trick: `n & (n - 1)`. This expression will be `0` only when `n` is a power of 2.
     - For example, if `n = 4` (`0100`), then `n - 1 = 3` (`0011`), and `4 & 3 = 0`.
   - If the result is `0`, the number is a power of 2. Otherwise, it is not.
   
4. **Special Case**:
   - If `n == 0`, the function should return `0` because 0 is not a power of 2.

---

## Pseudo Code

```
START
    If n is 0
        Return 0
    Else
        If n & (n - 1) equals 0
            Return 1
        Else
            Return 0
END
```

---

## Code Explanation

1. **Check if n is 0**:
   - If the number is 0, it is not a power of 2, so we return 0 immediately.
   
2. **Bitwise Operation**:
   - The expression `n & (n - 1)` checks if there is exactly one '1' bit in the binary representation of `n`. This works because:
     - Subtracting 1 from a power of 2 flips all the bits after the first '1' bit, including the '1' bit itself. So, ANDing `n` with `n - 1` results in `0`.
   
3. **Return the Result**:
   - If the result of `n & (n - 1)` is `0`, then `n` is a power of 2 and we return 1. Otherwise, we return 0.