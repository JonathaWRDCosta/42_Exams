## **ft_list_foreach**

**Assignment name**: ft_list_foreach  
**Expected files**: `ft_list_foreach.c`, `ft_list.h`  
**Allowed functions**: None  

---

### **Description**

This function applies a provided function to each element of a linked list. It traverses the list and calls the specified function on each node’s data.

### **Expected Output Format**

- The function does not return anything. Its purpose is to modify or use the list data through the function provided as an argument.

---

### **Function Prototypes**

```c
void ft_list_foreach(t_list *begin_list, void (*f)(void *));
```

---

### **Program Behavior**

1. **Iterate through the list**:  
   The `ft_list_foreach` function starts from the first element in the list (`begin_list`) and traverses the entire list, applying the function `f` to each node's data.

2. **Function Pointer**:  
   The function `f` is passed as a pointer, and it is applied to each element's `data` in the list. The function `f` must accept a `void *` as its argument and return nothing.

3. **Linked List Structure**:  
   The list structure is defined in `t_list`, where each node contains a pointer to the next node and a pointer to the data it holds.

---

### **Pseudo Code**

```plaintext
FUNCTION ft_list_foreach(begin_list, f):
    WHILE begin_list is not NULL:
        APPLY function f to begin_list->data
        MOVE to the next node (begin_list = begin_list->next)
```

---

### **Code Explanation**

- **The `t_list` structure**:  
   This structure represents a node in a linked list. Each node contains a `data` pointer, which stores the node’s data, and a `next` pointer, which points to the next node in the list.

- **The `f` function pointer**:  
   The function `f` is applied to each node’s `data`. It should perform any desired operation on the data (e.g., printing, modifying, etc.).

- **The `while` loop**:  
   The function iterates through the linked list, calling the function `f` on each node’s data. The loop continues until all nodes in the list have been processed.

---

### **Examples**

```c
// Example 1: Print the data of each node (assuming the data is an integer)
void print_int(void *data) {
    printf("%d\n", *(int *)data);
}

int main(void) {
    t_list *list = create_sample_list();  // Assume this creates a sample list
    ft_list_foreach(list, print_int);
    return 0;
}
// Output:
// 1
// 2
// 3
// 4
// 5
```
