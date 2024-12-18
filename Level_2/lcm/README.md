Assignment name  : lcm  
Expected files   : lcm.c  
Allowed functions: None (No restrictions)  

--------------------------------------------------------------------------------

Write a function that takes two unsigned integers as parameters and returns the computed **LCM** (Lowest Common Multiple) of those parameters.

The LCM of two non-zero integers is the smallest positive integer divisible by both integers.

There are two ways to calculate the LCM:

1. **Multiples Method**: You can calculate every multiple of each integer until you find a common multiple that is greater than 0.
  
2. **HCF Method**: You can calculate the LCM using the **HCF** (Highest Common Factor) of the two integers:
   
   $$
   LCM(x, y) = \frac{|x \times y|}{HCF(x, y)}
   $$
   
   Where | x * y | means the absolute value of the product of `x` and `y`.

If at least one integer is 0, the LCM is 0.

---

## **Function Prototype**

```c
unsigned int lcm(unsigned int a, unsigned int b);
```

---

## **Program Behavior**

1. **LCM Calculation**:
   - If either of the integers `a` or `b` is 0, the function immediately returns `0`.
   
   - Otherwise, the function proceeds to calculate the LCM.
   
   - The LCM can be calculated either by checking the multiples of both `a` and `b` (brute force) or using the HCF method.
   
   - The HCF method is generally faster, and for this exercise, we can implement it as follows:
     - Compute the **HCF** (Highest Common Factor) using the **Euclidean algorithm**.
     - Apply the LCM formula $$\frac{|x \times y|}{HCF(x, y)}$$.
   
2. **Return Result**:
   - The function returns the calculated LCM.

---

## **Pseudo Code**

```
START
    IF either a or b is 0 THEN
        RETURN 0
    END IF

    Compute HCF of a and b using Euclidean algorithm
    Calculate LCM as (a * b) / HCF(a, b)
    
    RETURN LCM
END
```

---

## **Code Explanation**

1. **Argument Handling**:
   - The function checks if either `a` or `b` is 0. If so, it returns `0` because the LCM of any number with 0 is undefined (0).

2. **HCF Calculation**:
   - The HCF is calculated using the **Euclidean algorithm**. This algorithm repeatedly subtracts the smaller number from the larger number or takes the remainder of the division until one number becomes zero. The other number at that point is the HCF.

3. **LCM Calculation**:
   - Once the HCF is found, the LCM is calculated using the formula: 

   $$
   LCM(a, b) = \frac{|a \times b|}{HCF(a, b)}
   $$

4. **Final Output**:
   - The function returns the LCM.
