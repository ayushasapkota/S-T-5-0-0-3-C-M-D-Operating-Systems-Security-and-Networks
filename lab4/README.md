# Lab 4: A Practical Approach to Understanding System Internals

## 1. Introduction

This lab focuses on understanding how data is stored in memory and how the operating system manages memory for a running program. The practical work involved checking the size of different C data types and observing where different variables are stored in a process's memory.

The main memory areas explored were the Text, Data, BSS, Heap, and Stack segments. The Linux `/proc` filesystem was also used to look at the memory mappings of a running process.

## 2. Objectives

The main objectives of this lab were:

- To find the memory size of different C data types.
- To compare data type sizes on a 64-bit system.
- To understand the main memory segments of a process.
- To observe the addresses of variables stored in different memory areas.
- To understand the difference between stack and heap memory.
- To use the Linux `/proc` filesystem to inspect process memory.
- To calculate the address difference between the stack and heap.

## 3. Tools Used

- Ubuntu Linux
- Linux Terminal
- GCC Compiler
- C Programming Language
- Linux `/proc` filesystem

## 4. Practical Work

### 4.1 Data Type Size Exploration

A C program was created using the `sizeof()` operator to check how much memory different data types use.

The program was compiled and executed using GCC. The sizes of the data types were then compared with the expected values for a 64-bit system.

### 4.2 Observing Memory Segments

A C program was created with different types of variables to observe their memory addresses.

The following memory areas were examined:

- **Text:** Contains the program instructions.
- **Data:** Contains initialized global variables.
- **BSS:** Contains uninitialized global variables.
- **Heap:** Contains dynamically allocated memory.
- **Stack:** Contains local variables and function-related data.

The addresses of these variables were printed using `%p`.

### 4.3 Inspecting Process Memory

The process was run in the background so that its memory could be inspected while it was running. The process ID was obtained from the terminal.

The Linux `/proc` filesystem was then used with the following command:

```bash
cat /proc/963/maps
