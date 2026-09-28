# Lab 2: C Programming Basics

## 1. Introduction

This lab focuses on the basic concepts of C programming and how C programs are compiled and executed in Linux. During the practical, different C programs were written and tested to understand program structure, user input, output, and return values.

The lab also helped us understand how the GCC compiler converts C source code into an executable program through different compilation stages.

## 2. Objectives

The main objectives of this lab were:

- To understand the basic structure of a C program.
- To write and run simple C programs in Linux.
- To work with user input and output.
- To understand the different stages of C compilation.
- To identify the `.i`, `.s`, `.o`, and executable files produced during compilation.
- To understand return values and program exit status.
- To practise using GCC commands in the Linux terminal.

## 3. Tools Used

- Ubuntu Linux
- Linux Terminal
- GCC Compiler
- C Programming Language

## 4. Practical Work

### 4.1 Basic C Program

First, a simple Hello World program was created and compiled. This helped us understand the basic structure of a C program, including the `#include` statement, `main()` function, `printf()` function, and `return` statement.

### 4.2 User Input and Output

A program was created to take an integer value from the user and display it back on the screen. Another program was used to practise formatted output using different types of data such as strings, integers, and floating-point values.

### 4.3 GCC Compilation Process

The GCC compiler was used to understand the different stages involved in converting a C program into an executable file.

The four stages were:

| Stage | Command | Output | Purpose |

Each stage was performed separately, and the files produced at each stage were checked.

### 4.4 Return Values and Exit Status

The return value of a C program was also tested. A program returning `0` was compiled and executed, and its exit status was checked using:

bash
echo $?
