Assignment name  : ft_rrange  
Expected files   : ft_rrange.c  
Allowed functions: malloc  

---------------------------------------------------------------

Write a function `ft_rrange` that takes two integer arguments, `start` and `end`, and returns a dynamically allocated array of integers. The array should contain the consecutive values starting from `end` and ending at `start`, including both `start` and `end`.

The function signature is:

```c
int *ft_rrange(int start, int end);
```

### Example:

For the input:

```c
ft_rrange(1, 3);
```

It should return an array with the following values: `[3, 2, 1]`.

For the input:

```c
ft_rrange(-1, 2);
```

It should return an array with the following values: `[2, 1, 0, -1]`.

If `start` equals `end`, such as in:

```c
ft_rrange(0, 0);
```

It should return an array containing `[0]`.

If `start` is greater than `end`, for example:

```c
ft_rrange(0, -3);
```

It should return an array containing `[-3, -2, -1, 0]`.

---

## Function Prototype

```c
int *ft_rrange(int start, int end);
```

---

## Code Explanation

1. **Memory Allocation**:
   The function begins by calculating the number of elements needed in the resulting array. This is determined by finding the absolute difference between `start` and `end`, then adding 1 to ensure both endpoints are included.

   ```c
   int n = end - start;
   if (n < 0)
       (n *= -1); // Make sure n is positive
   n++; // Add 1 to include both start and end in the range
   ```

   Then, `malloc` is used to allocate enough memory for an array of integers of size `n`.

   ```c
   range = (int *)malloc(sizeof(int) * n);
   ```

2. **Direction of Filling the Array**:
   The array is populated starting from `end` and moving towards `start`. If `start` is less than `end`, the values are placed in descending order, and we decrement `end` by 1 for each iteration.

   ```c
   if (start < end)
       step = -1;
   ```

   The loop iterates through the array, assigning values to each element and adjusting `end` by either incrementing or decrementing it, depending on the direction:

   ```c
   while (i < n)
   {
       range[i] = end;
       end = end + step;
       i++;
   }
   ```

3. **Returning the Result**:
   After filling the array, the pointer to the first element of the array is returned.

   ```c
   return (range);
   ```

---

## Pseudo Code

```pseudo
Function ft_rrange(start, end)
    Calculate n = abs(end - start) + 1  // Length of the resulting array
    Allocate memory for an array of size n

    If start < end
        Set step = -1  // We need to decrement from end to start
    Else
        Set step = 1   // We need to increment from end to start

    Initialize i = 0

    While i < n
        Set range[i] = end
        Modify end by step (increment or decrement based on the direction)
        Increment i

    Return range
End Function
```

---

### Key Points:
- The function creates a dynamically allocated array containing values starting from `end` and ending at `start`.
- The direction of filling the array is controlled by comparing `start` and `end`.
- `malloc` is used to allocate memory for the array, and it is returned as a pointer to the first element.
- The caller should ensure that the allocated memory is freed when no longer needed to avoid memory leaks.
