## **sort_list**

---

### **Expected Files**  
- `sort_list.c`
- `list.h` (provided but not to be turned in)

### **Allowed Functions**  
- None (no external functions allowed)

---

### **Description**  
Write a function that sorts a linked list in place. The function should take a linked list as input, use a function pointer `cmp` to determine the sorting order, and return a pointer to the first element of the sorted list. The function should handle duplicates and maintain the original structure of the list.

The sorting is done by comparing the `data` of adjacent nodes in the list and swapping them if necessary. The sorting will continue until the entire list is sorted.

---

### **Expected Output Format**  
- No direct output is expected from the function itself, but the list will be sorted in place, and the result can be checked by traversing the list after the function is executed.

---

### **Function Prototype**  
```c
t_list *sort_list(t_list *lst, int (*cmp)(int, int));
```

---

### **Program Behavior Step by Step**  
1. **Initialize the List**:  
   Set a pointer `start` to the beginning of the list. This pointer will keep track of the head of the list as we iterate and perform sorting.

2. **Iterate Through the List**:  
   Traverse the list, comparing the `data` of each pair of adjacent nodes using the function pointer `cmp`. If the order is incorrect (i.e., `cmp` returns 0), swap the `data` values between the two nodes.

3. **Reset After Swap**:  
   After a swap, reset the pointer `lst` to the head of the list (`start`). This ensures that the list is rechecked from the beginning since the swap may have affected the order of previous elements.

4. **Continue Until Sorted**:  
   Continue the process until the list is completely sorted, ensuring all adjacent elements are in the correct order as determined by the comparison function `cmp`.

5. **Return the Sorted List**:  
   Once sorted, return the pointer `start`, which points to the first element of the sorted list.

---

### **Pseudo Code**  
```plaintext
FUNCTION sort_list(lst, cmp):
    SET start to lst  // Keep track of the head of the list

    WHILE lst is not NULL AND lst->next is not NULL:
        IF (*cmp)(lst->data, lst->next->data) is 0:
            // Swap the data values of adjacent nodes
            SET swap to lst->data
            SET lst->data to lst->next->data
            SET lst->next->data to swap
            RESET lst to start  // Re-check the list from the beginning
        ELSE:
            MOVE lst to lst->next  // Move to the next node in the list

    RETURN start  // Return the head of the sorted list
```
