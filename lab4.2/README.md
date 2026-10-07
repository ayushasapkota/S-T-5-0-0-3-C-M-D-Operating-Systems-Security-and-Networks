# Lab 4.2 – Mapping Process Runtime Topography Using GDB

## Module

ST5003CMD – Operating Systems, Security and Networks

## Laboratory Title

**Mapping Process Runtime Topography Using Low-Level Hardware Debugging Infrastructure**

## Objective

The objective of this laboratory is to investigate the runtime memory layout of a Linux process using the GNU Debugger (GDB).

The laboratory focuses on:

1. Identifying the memory boundaries of the **BSS**, **Heap**, and **Stack** regions.
2. Using GDB to inspect process memory and runtime variables.
3. Using `readelf` to examine the program's memory structure.
4. Examining stack and heap addresses during program execution.
5. Understanding virtual memory and process isolation.

## Files

The main source file for this laboratory is:

```text
demo.c
```

The compiled executable is:

```text
demo
```

## Main Memory Regions

| Region    | Description                                                            |
| --------- | ---------------------------------------------------------------------- |
| `.bss`    | Stores uninitialized global and static variables                       |
| `[heap]`  | Stores dynamically allocated memory using functions such as `malloc()` |
| `[stack]` | Stores local variables, function calls, and stack frames               |

## Compilation

The program will be compiled with debugging symbols using:

```bash
gcc -g demo.c -o demo
```

The `-g` option adds debugging information so that GDB can identify source code lines, variables, and symbols.

## Debugging Tools

The main tools used in this laboratory are:

* GCC
* GDB
* readelf
* Linux `/proc` process information

## Important GDB Commands

```text
gdb ./demo
break 23
run
info files
print &bss_global_var
info proc mappings
print stack_local_var
print &stack_local_var
x/4wx $sp
print heap_ptr
x/1wd heap_ptr
continue
quit
```

## Memory Address Investigation

During the experiment, the following addresses will be recorded:

* `.bss` start and end addresses
* `[heap]` start and end addresses
* `[stack]` start and end addresses
* Address of `bss_global_var`
* Address of `stack_local_var`
* Address stored in `heap_ptr`

These values will be used to create a memory mapping table in the laboratory report.

## Memory Examination

The command:

```text
x/1wd heap_ptr
```

will be used to examine the value stored in the dynamically allocated heap memory.

The command consists of:

* `1` – examine one memory unit
* `w` – display one word (4 bytes)
* `d` – display the value as a signed decimal integer

Therefore, the command reads **one 4-byte word from the address stored in `heap_ptr` and displays it as a decimal value**.

## Expected Result

The program should successfully compile and execute under GDB. The debugging session should allow the `.bss`, heap, and stack regions to be identified and their virtual address ranges recorded.

The final report will contain:

1. Terminal screenshots/logs
2. Compilation evidence
3. GDB debugging results
4. `.bss`, heap, and stack address table
5. Explanation of `x/1wd`
6. Analysis of heap and stack address relationships
7. Explanation of virtual memory and process isolation

## Author

**Ayusha Sapkota**

