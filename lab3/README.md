# Lab 3: Investigating Process Lifecycles and OS Interaction

## 1. Introduction

This lab focuses on understanding how processes work in a Linux operating system. The practical work involved creating and running simple C programs to observe process execution, process identification, parent and child processes, and exit status.

The exercises helped us understand how a program becomes a process and how the operating system manages it while it is running.

## 2. Objectives

The main objectives of this lab were:

- To understand the basic concept of a process.
- To observe how processes are created and executed.
- To identify a process using its Process ID (PID).
- To understand the relationship between a process and its parent process.
- To observe process execution and termination.
- To understand how a program communicates its exit status to the operating system.
- To use Linux commands to observe running processes.

## 3. Tools Used

- Ubuntu Linux
- Linux Terminal
- GCC Compiler
- C Programming Language

## 4. Practical Work

### 4.1 Running a Long-Running Process

A C program was created that runs for a specific period of time. The program was executed from the Linux terminal and its Process ID (PID) was observed.

This helped us understand that when a program is running, the operating system assigns it a unique PID.

### 4.2 Process Identification

A C program was used to display information about the current process and its parent process. The PID and Parent Process ID (PPID) were observed during execution.

This helped demonstrate the relationship between a process and the process that started it.

### 4.3 Process Exit Status

Another program was used to demonstrate how a process terminates and returns an exit status to the operating system. The exit status was checked from the Linux terminal after the program finished running.

### 4.4 Observing Processes in Linux

Linux process-related commands were used to observe information about running processes. This provided a practical understanding of how the operating system keeps track of active processes.

## 5. Key Observations

During the practical, it was observed that every running process has its own PID. A process also has a parent process identified by a PPID. The operating system manages the process while it is running and records its status when it terminates.

## 6. Conclusion

This lab provided a basic understanding of process management in Linux. By creating and running simple C programs, we were able to observe process IDs, parent processes, execution, and termination. The practical also showed how C programs interact with the operating system during their execution.
