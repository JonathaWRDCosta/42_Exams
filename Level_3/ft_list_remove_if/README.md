## **ft_list_remove_if**

**Assignment name**: ft_list_remove_if  
**Expected files**: `ft_list_remove_if.c`, `ft_list.h`  
**Allowed functions**: `free`  

---

### **Description**

The `ft_list_remove_if` function removes all nodes from a linked list where the node's data is "equal" to the provided reference data. The comparison is made using a function pointer, `cmp`, which returns `0` when two elements are considered equal.

### **Expected Output Format**

- This function does not produce output directly. It modifies the list by removing elements whose data matches the reference data.

---

### **Function Prototypes**

```c
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
```

---

### **Program Behavior**

1. **Comparison Function (`cmp`)**:  
   The `cmp` function is a comparison function that takes two `void *` arguments. It returns `0` when the elements are considered equal, indicating that the node's data matches the reference data (`data_ref`).

2. **Removing Nodes**:  
   The function traverses the linked list and removes nodes where the data matches the reference data. Memory for removed nodes is freed using the `free` function.

3. **Recursive Deletion**:  
   The function uses recursion to handle the removal process for all nodes. It continues to traverse and remove nodes as long as they meet the condition (data equal to `data_ref`).

4. **Edge Cases**:  
   The function handles edge cases, such as an empty list or `NULL` references, by checking for these conditions at the beginning.

---

### **Pseudo Code**

```plaintext
FUNCTION ft_list_remove_if(begin_list, data_ref, cmp):
    IF begin_list or *begin_list is NULL:
        RETURN
    
    SET cur to *begin_list
    
    IF cmp(cur->data, data_ref) == 0:
        REMOVE the current node (free it)
        UPDATE begin_list to point to the next node
        CALL ft_list_remove_if recursively with updated begin_list
    
    ELSE:
        CALL ft_list_remove_if recursively with the next node (cur->next)
```

---

### **Code Explanation**

- **The `t_list` structure**:  
   The `t_list` structure defines a node in the linked list. Each node contains a `data` pointer (storing the node's data) and a `next` pointer (pointing to the next node in the list).

- **The `cmp` function pointer**:  
   The `cmp` function is used to compare the data of the current node (`cur->data`) with the reference data (`data_ref`). If they are equal (i.e., `cmp` returns 0), the node is removed.

- **Recursive List Traversal**:  
   The function first checks if the node at the start of the list matches the reference data. If it does, the node is freed, and the list is updated. Then, the function calls itself recursively to process the rest of the list. The recursion ensures that all matching nodes are removed, even if they are not at the beginning of the list.

---

### **Examples**

```c
// Example: Remove all nodes with data equal to a specific integer
int cmp_int(void *data, void *ref) {
    return *(int *)data - *(int *)ref;  // Compare integers
}

int main(void) {
    t_list *list = create_sample_list();  // Assume this creates a sample list with integers
    int data_to_remove = 3;
    
    ft_list_remove_if(&list, &data_to_remove, cmp_int);  // Remove all nodes with data equal to 3
    
    // Output the modified list (nodes containing '3' should be removed)
    print_list(list);
    return 0;
}
// Output: List without any nodes with data equal to 3
```
