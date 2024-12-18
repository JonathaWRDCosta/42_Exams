# Character Repeater Program

## Description

This program reads a single command-line argument (a string) and repeats each of its characters a number of times based on its position in the alphabet. Specifically:
- For lowercase letters (`a-z`), the character is repeated according to its position in the alphabet (e.g., 'a' is repeated once, 'b' is repeated twice, and so on).
- For uppercase letters (`A-Z`), the repetition count is the same as the corresponding lowercase letter.
- Non-alphabet characters (like numbers or punctuation) are printed exactly once.

### Function Prototype:
```c
int main(int argc, char *argv[]);
```

## Explanation of the Code

### Input

The program expects exactly one argument (a string). If the number of arguments is not equal to 2, it outputs only a newline and terminates.

### Character Processing

1. **Validation**:
   - The program checks whether exactly one argument is passed (excluding the program name itself). If not, it prints a newline and returns immediately.

2. **Character Analysis**:
   - The program iterates over each character in the input string (`argv[1]`).
   - For **lowercase** letters ('a' to 'z'), it calculates the repetition count using the formula:
     ```c
     count = argv[1][i] - 'a' + 1;
     ```
     - For **uppercase** letters ('A' to 'Z'), it calculates the repetition count similarly, but using the uppercase range:
     ```c
     count = argv[1][i] - 'A' + 1;
     ```
   - If the character is neither uppercase nor lowercase, such as digits or punctuation, it defaults to printing the character once.

3. **Character Output**:
   - For each character, the program repeats the character the calculated number of times using the `write` function. This allows the program to print each character directly to the standard output without relying on `printf`.

4. **Final Output**:
   - After processing all the characters in the string, a newline character (`\n`) is printed to signify the end of the output.

### Example Usage

#### Example 1:
```bash
$ ./repeat_chars "Hello"
```

**Output**:
```
HHeellllooo
```
Explanation:
- 'H' is the 8th letter, so it prints "H" 8 times.
- 'e' is the 5th letter, so it prints "e" 5 times.
- 'l' is the 12th letter, so it prints "l" 12 times (this happens twice, once for each 'l').
- 'o' is the 15th letter, so it prints "o" 15 times.

#### Example 2:
```bash
$ ./repeat_chars "abc123"
```

**Output**:
```
aabcc123
```
Explanation:
- 'a' repeats 1 time.
- 'b' repeats 2 times.
- 'c' repeats 3 times.
- Non-alphabetic characters '1', '2', and '3' are printed once.

#### Example 3:
```bash
$ ./repeat_chars
```

**Output**:
```
<newline>
```
Since no argument is passed, the program simply prints a newline and terminates.

### Edge Cases

- **No Arguments**:
  If no argument is passed, the program will output only a newline.
  
- **Multiple Arguments**:
  If more than one argument is passed, the program will output only a newline and terminate.

- **Empty String**:
  If the string argument is empty, the program will output a newline and terminate.

- **Non-Alphabetic Characters**:
  Any character that is not a letter (e.g., numbers, symbols) will be printed exactly once.

### Time and Space Complexity

- **Time Complexity**: O(n), where `n` is the length of the input string. The program processes each character in the string exactly once and prints a corresponding number of times.
- **Space Complexity**: O(1), since the program uses only a fixed amount of memory regardless of the input string length.