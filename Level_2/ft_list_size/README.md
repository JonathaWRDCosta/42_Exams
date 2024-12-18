# Exercise: ft_list_size

## Description

Assignment name  : ft_list_size  
Expected files   : ft_list_size.c, ft_list.h  
Allowed functions: None  

---------------------------------------------------------------

Write a function that returns the number of elements in a linked list. The function should be able to count the elements in the list by traversing it recursively.

The function must be declared as follows:

```c
int ft_list_size(t_list *begin_list);
```

You must use the following structure, and turn it in as a file called `ft_list.h`:

```c
typedef struct s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```

### Example:

Given the following list:

```c
t_list *list = NULL;
t_list node1, node2, node3;
node1.data = "first";
node1.next = &node2;
node2.data = "second";
node2.next = &node3;
node3.data = "third";
node3.next = NULL;

list = &node1;
```

The function call `ft_list_size(list)` should return `3`, as there are three elements in the list.

---

## Function Prototype

```c
int ft_list_size(t_list *begin_list);
```

---

## Code Explanation

### 1. **Recursive Traversal of the List**:
   - The function will traverse the list from the beginning. It checks if the current node (`begin_list`) is `NULL`—if it is, this means we've reached the end of the list, so it returns `0`.
   - If the current node is not `NULL`, the function adds `1` for the current node and then recursively calls itself with the next node (`begin_list->next`).

### 2. **Base Case**:
   - The base case for the recursion is when the list is empty (`begin_list == NULL`). In this case, we return `0` because there are no elements to count.

### 3. **Recursive Case**:
   - In the recursive case, the function counts the current node (`1`) and calls itself with the next node. It then accumulates the counts as the recursion unfolds, ensuring that all nodes are counted.

---

## Pseudo Code

```pseudo
Function ft_list_size(begin_list)
    If begin_list is NULL
        Return 0
    Else
        Return 1 + ft_list_size(begin_list->next)
End Function
```

---

## Example

```c
#include "ft_list.h"

int main()
{
    t_list *list = NULL;
    t_list node1, node2, node3;

    node1.data = "first";
    node1.next = &node2;
    node2.data = "second";
    node2.next = &node3;
    node3.data = "third";
    node3.next = NULL;

    list = &node1;

    // This should output 3 as there are three elements in the list
    printf("List size: %d\n", ft_list_size(list));

    return 0;
}
```
