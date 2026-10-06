# Lab 5 – Memory Segments and GDB Inspection

## Objective

The purpose of this laboratory was to understand how a C program is organized in memory and to inspect different memory sections using the GNU Debugger (GDB).

The main sections investigated were:

- `.text` – executable program instructions
- `.rodata` – read-only data such as string literals
- `.data` – initialized global variables
- `.bss` – uninitialized global/static variables

## Source Code

The C program used in this lab was `demo2.c`.

The program contains:

- An initialized global variable:
  `data_global_var = 0x12345678`
- A read-only string literal:
  `" Text_Segment_Verification"`
- A function called `check_execution()`
- A `main()` function that prints the memory addresses of these objects

## Compilation

The program was compiled using GCC with debugging information:

```bash
gcc -g demo2.c -o demo2
