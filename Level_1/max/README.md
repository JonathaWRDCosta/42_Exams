# Exercise: max

## Description

Assignment name  : max  
Expected files   : max.c  
Allowed functions: None  

---------------------------------------------------------------

Write a function that finds the largest number in an array of integers.

### Function Prototype:

```c
int max(int *tab, unsigned int len);
```

### Parameters:
- **tab**: An array of integers.
- **len**: The number of elements in the array.

### Requirements:
- The function returns the largest number found in the array.
- If the array is empty (i.e., `len` is 0), the function returns `0`.

### Examples:

```c
int arr1[] = {1, 2, 3, 4, 5};
int result1 = max(arr1, 5); // result1 will be 5

int arr2[] = {-1, -2, -3};
int result2 = max(arr2, 3); // result2 will be -1

int arr3[] = {};
int result3 = max(arr3, 0); // result3 will be 0
```

---

## Function Behavior

1. **Input**:
   - `tab` is a pointer to an array of integers.
   - `len` is the number of elements in the array.

2. **Output**:
   - The function should return the largest integer in the array if the array contains elements.
   - If the array is empty (when `len` is 0), return `0`.

3. **Edge Cases**:
   - If the array is empty (i.e., `len` is 0), the function will return `0`.
   - The function should handle arrays with negative numbers correctly.

---

## Pseudo Code

```
START
    If the length of the array is 0, return 0
    Set result to the first element of the array
    Iterate through the array, comparing each element with the current largest value (result)
    If a larger value is found, update result
    Return result
END
```

---

## Code Explanation

1. **Initialization**:
   - We start by checking if the array is empty (`len == 0`). If it is, we return `0` immediately.
   
2. **Iterating through the array**:
   - We assume the first element in the array (`tab[0]`) is the largest initially. We set the `result` to this value.
   - Then, we iterate through the remaining elements of the array. If any element is larger than the current `result`, we update `result`.

3. **Return the result**:
   - Once the loop finishes, we return the value stored in `result`, which will be the largest number in the array.
