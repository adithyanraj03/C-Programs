# C-Programs

A curated collection of standalone C programs covering core language topics: control flow, arrays, pointers and dynamic memory, functions, variable scope, strings, structures, recursion, and a singly linked list. Each file demonstrates one specific concept and serves as a compact reference for C fundamentals.

## Contents

### Control Flow and Basics

| File | Summary |
| --- | --- |
| `if_else.c` | `if`, `else if`, and `else` chain examples |
| `switch.c` | Calculator menu driven by a `switch` statement |
| `loop.c` | `while`, `do-while`, and `for` loops, with `break`/`continue` |
| `goto.c` | Program flow with `goto` (calculator example) |

### Arrays

| File | Summary |
| --- | --- |
| `array.c` | One-dimensional arrays: reading and processing subject marks |
| `array_2d.c` | Two-dimensional arrays: matrix input and matrix addition |

### Pointers and Dynamic Memory

| File | Summary |
| --- | --- |
| `pointer.c` | Basic pointers: address-of and dereferencing |
| `pointer_array.c` | Traversing an array with pointer incrementation (marks sum) |
| `pointer_dynamic.c` | Dynamic memory allocation with `malloc` |
| `tempCodeRunnerFile.c` | Minimal pointer address/value demo |

### Functions

| File | Summary |
| --- | --- |
| `function.c` | Simple function with parameters and a return value |
| `function_value.c` | Call by value: argument-copy demonstration |
| `function_reference.c` | Call by reference: modifying the caller through pointers |
| `function_array.c` | Passing a one-dimensional array to a function |
| `function_2d_array.c` | Passing a two-dimensional array to a function (student marks) |

### Variable Scope

| File | Summary |
| --- | --- |
| `scope.c` | Local variable scope in `main` versus a function |
| `scope_global.c` | Global variables and `extern` usage |
| `scope_static.c` | A variable that persists across function calls |

### Strings

| File | Summary |
| --- | --- |
| `string.c` | Reading and concatenating strings |
| `string_1.c` | String formatting (`%s` width/precision) and `strlen` |

### Structures

| File | Summary |
| --- | --- |
| `structure.c` | Basic struct fields with two `student` records |
| `structure_array of structure.c` | Array of structs (n student records) |
| `structure_array within structure.c` | Struct containing an array member (`mark[3]`) |
| `structure_function.c` | Struct with a nested struct array and a print function |
| `structure_function_with_return.c` | Function returning a pointer to a struct |

### Recursion and Data Structures

| File | Summary |
| --- | --- |
| `recursion.c` | Recursive factorial |
| `linked_list1.c` | Menu-driven singly linked list: insert at end, print, search |

### Other

| File | Summary |
| --- | --- |
| `test1.c` | Empty placeholder file (0 bytes) |

## Compiling

Compile any program with `gcc`:

```bash
gcc -Wall -o program program.c
./program
```

Example:

```bash
gcc -Wall -o linked_list1 linked_list1.c
./linked_list1
```

Note: the examples use `void main()` and C89-style declarations, which classic compilers accept; some modern compilers may warn or require an `-std` flag or a change to `int main()`.
