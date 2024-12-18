# Exercise: ft_split

## Description

The goal is to create a function named `ft_split` that takes a string, splits it into **words**, and returns them as a NULL-terminated array of strings.

### Word Definition:
- A **word** is a sequence of characters **delimited** by:
  - Spaces (`' '`),
  - Tabs (`'\t'`), or
  - Newlines (`'\n'`).
- The start and end of the string also act as boundaries for words.

---

## Function Prototype

```c
char    **ft_split(char *str);
```

### Input:
- A single string `str`.

### Output:
- A dynamically allocated NULL-terminated array of strings, where each string corresponds to a word.

### Allowed Functions:
- `malloc`

---

## Code Implementation

Here’s the implementation:

```c
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	
	// Word count
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	// Allocate memory for the word array
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	
	// Word extraction
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}
```

---

## Explanation of the Code

### Key Steps:

1. **Word Count**:
   - Iterate through the input string `str` to count the total number of words (`wc`).
   - Skip delimiters (spaces, tabs, or newlines).
   - Increment the word count when a new word starts.

2. **Memory Allocation**:
   - Allocate memory for an array of strings (`char **out`) to hold all the words plus one `NULL` at the end.

3. **Word Extraction**:
   - For each word:
     - Skip leading delimiters.
     - Identify the start (`j`) and end (`i`) of the word.
     - Allocate memory for the word and copy it into the array using the helper function `ft_strncpy`.

4. **Termination**:
   - Add a `NULL` pointer at the end of the array to mark its termination.

---

## Key Concepts

1. **Dynamic Memory Allocation**:
   - Memory is allocated dynamically for both the array of words and individual words using `malloc`.

2. **String Copy**:
   - The helper function `ft_strncpy` is used to copy a substring of a given length into a new string.

3. **Delimiters**:
   - Words are separated by spaces, tabs, or newlines.

---

## Example Usage

### Input String:

```bash
"Hello   world\tthis\nis\t42"
```

### Output:

```c
char **result = ft_split("Hello   world\tthis\nis\t42");

printf("%s\n", result[0]); // "Hello"
printf("%s\n", result[1]); // "world"
printf("%s\n", result[2]); // "this"
printf("%s\n", result[3]); // "is"
printf("%s\n", result[4]); // "42"
```

### Memory Layout:

```
result:
+---------------------+
| "Hello"             |
+---------------------+
| "world"             |
+---------------------+
| "this"              |
+---------------------+
| "is"                |
+---------------------+
| "42"                |
+---------------------+
| NULL                |
+---------------------+
```

---

## Edge Cases

1. **Input: Empty String**  
   ```bash
   $> ft_split("")
   ```
   - Output: `NULL`-terminated array with no words.

2. **Input: Only Delimiters**  
   ```bash
   $> ft_split("   \t\n  ")
   ```
   - Output: `NULL`-terminated array with no words.

3. **Input: Single Word**  
   ```bash
   $> ft_split("word")
   ```
   - Output: `["word", NULL]`.

4. **Multiple Delimiters Between Words**  
   - Handles multiple spaces, tabs, and newlines correctly.

---

## Compilation and Execution

To compile:

```bash
cc -Wall -Wextra -Werror ft_split.c
```

To test:

```bash
./ft_split
```