# Exercise: first_word

## Description

The objective is to write a program that extracts and displays the **first word** of a given string. A word is defined as a sequence of characters delimited by:
- Spaces (`' '`),
- Tabs (`'\t'`), or
- The start and end of the string.

If the input conditions are not met, the program simply prints a newline (`\n`).

---

## Program Rules

### Input:
- The program takes **exactly one argument**: a string.

### Output:
- The first word of the string, followed by a newline.

### Edge Cases:
- If there are no arguments or more than one argument, output a newline.
- If there are no valid words (e.g., only spaces or tabs), output a newline.

### Allowed Functions:
- `write`

---

## Code Implementation

Here’s the implementation:

```c
#include <unistd.h>

char ft_first_word(char *str)
{
    // Skip leading spaces or tabs
	while (*str == ' ' || *str == '\t')
		str++;
	
    // Print the first word
	while (*str && (*str != ' ' && *str != '\t'))
	{
		write(1, str, 1);
		str++;
	}
	
	write(1, "\n", 1);
	return (*str);
}

int main(int argc, char *argv[])
{
    // Check for exactly one argument
	if (argc != 2)
		return (write(1, "\n", 1));
	
	ft_first_word(argv[1]);
	return (0);
}
```

---

## Explanation of the Code

### Key Steps:

1. **Skip Leading Delimiters**:
   - Use a `while` loop to move the pointer past any spaces (`' '`) or tabs (`'\t'`) at the start of the string.

2. **Print the First Word**:
   - Loop through the string and print characters until a space, tab, or the end of the string is encountered.

3. **Output a Newline**:
   - After the first word is printed, write a newline (`'\n'`) to standard output.

4. **Argument Check**:
   - The program ensures that exactly one argument is provided. If not, it prints a newline and exits.

---

## Key Concepts

1. **Character Comparison**:
   - Delimiters are identified using:
     ```c
     if (*str == ' ' || *str == '\t')
     ```

2. **Pointer Navigation**:
   - The string pointer `str` is incremented to skip or traverse characters.

3. **Output Using `write`**:
   - `write` is used to print characters directly to the standard output.

---

## Example Usage

### Example 1: Standard Input

**Input:**
```bash
./first_word "FOR PONY"
```

**Output:**
```
FOR
```

---

### Example 2: Multiple Words with Delimiters

**Input:**
```bash
./first_word "   lorem,ipsum  "
```

**Output:**
```
lorem,ipsum
```

---

### Example 3: Only Delimiters

**Input:**
```bash
./first_word "   "
```

**Output:**
```
```
(No characters, just a newline.)

---

### Example 4: No Arguments or Multiple Arguments

**Input:**
```bash
./first_word
```
**Output:**
```
```

**Input:**
```bash
./first_word "a" "b"
```

**Output:**
```
```

---

## Compilation and Execution

To compile the program:

```bash
cc -Wall -Wextra -Werror first_word.c
```

To run the program:

```bash
./first_word "Your input string here"
```

---

## Edge Cases

1. **Input with Leading Spaces or Tabs**:
   - The program skips all leading spaces or tabs before finding the first word.

2. **No Words**:
   - If the string contains only spaces or tabs, the program outputs a newline.

3. **Single Word**:
   - If the input string has only one word, it is printed correctly.

4. **Multiple Arguments**:
   - If more than one argument is provided, the program outputs only a newline.