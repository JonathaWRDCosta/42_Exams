# Exercise: ft_range

## Description

Assignment name  : ft_range  
Expected files   : ft_range.c  
Allowed functions: malloc  

---------------------------------------------------------------

Write a function `ft_range` that takes two integer arguments, `start` and `end`, and returns a dynamically allocated array containing all integers from `start` to `end` (both inclusive). If `start` is less than or equal to `end`, the array should contain increasing integers. If `start` is greater than `end`, the array should contain decreasing integers.

The function signature is:

```c
int *ft_range(int start, int end);
```

### Example:

For the following input:

```c
ft_range(1, 3);
```

It should return an array with the following values: `[1, 2, 3]`.

For the input:

```c
ft_range(-1, 2);
```

It should return an array with the following values: `[-1, 0, 1, 2]`.

If `start` equals `end`, such as in:

```c
ft_range(0, 0);
```

It should return an array containing `[0]`.

If `start` is greater than `end`, for example:

```c
ft_range(0, -3);
```

It should return an array containing `[0, -1, -2, -3]`.

---

## Function Prototype

```c
int *ft_range(int start, int end);
```

---

## Code Explanation

1. **Memory Allocation**:  
   The function starts by calculating the length of the array using the difference between `start` and `end`, plus 1 to include both `start` and `end`. It uses `malloc` to allocate enough memory for an integer array of this length.

   ```c
   int len = abs((end - start)) + 1;
   int *res = (int *)malloc(sizeof(int) * len);
   ```

2. **Populating the Array**:  
   - The function uses a `while` loop to fill the array. The loop continues until `i` reaches the length of the array.
   - If `start` is less than `end`, it fills the array with increasing values by incrementing `start` and storing it in the array.
   - If `start` is greater than `end`, it fills the array with decreasing values by decrementing `start`.

3. **Returning the Result**:  
   The function returns the pointer to the first element of the array. After this, the caller will be responsible for freeing the allocated memory when no longer needed.

---

## Pseudo Code

```pseudo
Function ft_range(start, end)
    Calculate length = abs(end - start) + 1
    Allocate memory for an integer array of length
    Initialize i = 0

    While i < length
        If start < end
            Set res[i] = start
            Increment start
        Else
            Set res[i] = start
            Decrement start
        Increment i

    Return res
End Function
```

---

### Key Points:
- The function ensures that the array includes all numbers between `start` and `end` (inclusive).
- The direction of the numbers in the array is determined by the relative positions of `start` and `end`.
- `malloc` is used to dynamically allocate memory for the array, and it must be freed by the user after use to avoid memory leaks.
