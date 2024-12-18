## **sort_int_tab**

---

### **Expected Files**  
- `sort_int_tab.c`

### **Allowed Functions**  
- None (no external functions allowed)

---

### **Description**  
Write a function that sorts an integer array in ascending order. The function must sort the array in place, modifying the original array without using additional space (besides temporary variables for swapping). The array will contain exactly `size` elements, and the sorting algorithm should preserve any duplicates in the array.

---

### **Expected Output Format**  
- No output is expected from the function itself. The array is sorted in place, and the result can be verified by inspecting the array after the function is executed.

---

### **Function Prototype**  
```c
void sort_int_tab(int *tab, unsigned int size);
```

---

### **Program Behavior Step by Step**  
1. **Initialize the Loop**:  
   Initialize an index `i` to 0 and use a temporary variable `temp` to store values during the swapping process.

2. **Iterate Through the Array**:  
   The array is traversed from index 0 to `size - 1`. If any pair of adjacent elements is out of order (i.e., `tab[i] > tab[i + 1]`), they are swapped.

3. **Handle Swaps**:  
   When a pair is swapped, the index `i` is reset to 0. This is because the swap may have disrupted the order of previous elements, so the array must be checked from the beginning again. If no swaps occur, the iteration proceeds to the next element.

4. **Repeat Until Sorted**:  
   The function continues iterating through the array, resetting `i` to 0 whenever a swap occurs. Once a full pass through the array occurs without any swaps, the array is sorted, and the function completes.

---

### **Pseudo Code**  
```plaintext
FUNCTION sort_int_tab(tab, size):
    SET i to 0   // Initialize the index
    SET temp to 0   // Temporary variable for swapping

    WHILE i < size - 1:
        IF tab[i] > tab[i + 1]:
            // Swap the elements
            SET temp to tab[i]
            SET tab[i] to tab[i + 1]
            SET tab[i + 1] to temp
            RESET i to 0   // Restart the loop from the beginning
        ELSE:
            INCREMENT i   // Move to the next pair of elements
    END WHILE
```
