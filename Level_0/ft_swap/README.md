# Exercise: ft_swap

## Description

Assignment name  : ft_swap  
Expected files   : ft_swap.c  
Allowed functions: None  

--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers, the addresses of which are passed as parameters.

Your function must be declared as follows:

```c
void ft_swap(int *a, int *b);
```

### Expected Output Format

- The function should swap the values stored at the addresses pointed to by `a` and `b`.
- No value should be returned by the function.

---

## Function Prototype

```c
void ft_swap(int *a, int *b);
```

---

## Program Behavior

1. **Swapping the Values**:
   - The function `ft_swap` takes two integer pointers as parameters: `a` and `b`.
   - It swaps the values of the integers stored at the memory locations pointed to by `a` and `b`.

2. **Temporary Storage**:
   - A temporary variable is used to hold the value of `*a` while it is being replaced with the value of `*b`. After this, the value stored in `*b` is assigned to `*a`, and then the temporary variable is used to assign the original value of `*a` to `*b`.

---

## Pseudo Code

```
START
    CREATE a temporary variable temp

    STORE the value of *a into temp

    ASSIGN the value of *b to *a

    ASSIGN the value of temp to *b
END
```

---

## Code Explanation

1. **Using a Temporary Variable**:
   - A temporary variable `temp` is used to store the value pointed to by `a`. This is necessary to prevent overwriting the value of `*a` before it's copied to `*b`.

2. **Swapping the Values**:
   - After storing `*a` in `temp`, the value of `*b` is assigned to `*a`.
   - The value stored in `temp` (the original value of `*a`) is then assigned to `*b`, completing the swap.

3. **No Return Value**:
   - The function does not return any value, as the swap occurs directly on the values pointed to by `a` and `b`.
