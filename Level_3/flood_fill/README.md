## **flood_fill**

**Assignment name**: flood_fill  
**Expected files**: `flood_fill.c`, `flood_fill.h`  
**Allowed functions**: None  

---

### **Description**

The task is to implement a function that fills a "zone" in a 2D grid, replacing a contiguous region of characters with the character 'F'. The filling starts from a given point and only works horizontally and vertically, not diagonally. The zone to be filled is a group of the same character, which is surrounded by other characters or the boundary of the array.

You need to define the following:

- A `t_point` structure to represent coordinates in the 2D array.
- A `flood_fill` function that fills the zone starting from a given point.

If there are no arguments passed to the program, it should output `\n`.

---

### **Expected Output Format**

The program must modify the provided 2D array (grid), filling the zone starting from the `begin` point with 'F'. It doesn't output anything to standard output directly in this task, as it works in-place on the grid.

---

### **Function Prototypes**

```c
typedef struct s_point {
    int x;  // x : Width  | x-axis
    int y;  // y : Height | y-axis
} t_point;

void flood_fill(char **tab, t_point size, t_point begin);
```

---

### **Program Behavior**

1. **t_point Structure**:  
   This structure holds two integers, `x` (the x-coordinate) and `y` (the y-coordinate), which represent the coordinates of the starting point for the filling.

2. **flood_fill Function**:  
   - This function will initiate the flood-fill process starting from the `begin` point.
   - It will recursively replace characters in the grid from the starting point until the boundary or a different character is encountered.
   - It uses a helper function (`fill`) that handles the recursive flood-fill logic.

3. **fill Function**:  
   This function performs the flood-fill algorithm recursively:
   - Checks the boundaries of the grid.
   - Compares the current character with the starting character to determine whether it should be filled.
   - Recursively calls itself to fill adjacent cells (up, down, left, right).

---

### **Pseudo Code**

#### **t_point Structure**
```plaintext
STRUCTURE t_point:
    - x: integer (represents the x-coordinate or width)
    - y: integer (represents the y-coordinate or height)
```

#### **fill Function**
```plaintext
FUNCTION fill(tab, size, cur, to_fill):
    IF cur.y < 0 OR cur.y >= size.y OR cur.x < 0 OR cur.x >= size.x:
        RETURN
    IF tab[cur.y][cur.x] != to_fill:
        RETURN
    tab[cur.y][cur.x] = 'F'
    CALL fill(tab, size, (cur.x - 1, cur.y), to_fill)  # Left
    CALL fill(tab, size, (cur.x + 1, cur.y), to_fill)  # Right
    CALL fill(tab, size, (cur.x, cur.y - 1), to_fill)  # Up
    CALL fill(tab, size, (cur.x, cur.y + 1), to_fill)  # Down
END FUNCTION
```

#### **flood_fill Function**
```plaintext
FUNCTION flood_fill(tab, size, begin):
    CALL fill(tab, size, begin, tab[begin.y][begin.x])
END FUNCTION
```

---

### **Code Explanation**

- **`t_point` Structure**: The structure contains the coordinates of the point to begin the fill.
- **`flood_fill` Function**: This is the main entry point, which initializes the process by calling `fill` with the starting point.
- **`fill` Function**: This is a recursive function that:
  - Marks the current point as filled ('F').
  - Recursively checks the neighboring points (up, down, left, right) and fills them if they match the starting character.

---

### **Examples**

```c
// Example 1:
t_point size = {8, 5};
char *zone[] = {
    "11111111",
    "10001001",
    "10010001",
    "10110001",
    "11100001",
};

char** area = make_area(zone, size);
t_point begin = {7, 4};
flood_fill(area, size, begin);
// Resulting area after flood_fill:
FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
```

```c
// Example 2:
t_point size = {8, 5};
char *zone[] = {
    "11111111",
    "10001001",
    "10010001",
    "10110001",
    "11100001",
};

char** area = make_area(zone, size);
t_point begin = {0, 0};
flood_fill(area, size, begin);
// Resulting area after flood_fill:
FFFFFFFF
FFFFFFFF
FFFFFFFF
FFFFFFFF
FFFFFFFF
```
