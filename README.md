# Collatz Conjecture with Process Management in C
Author: Kuan, Chin-Wei (官京緯)

Date: March 30, 2026
## Project Overview

This project implements the **Collatz conjecture** algorithm in C, utilizing Unix system calls for process management. This program generates the collatzs sequence in a child process, while the parent process waits for the child to complete before exiting.

## Introduction - Collatz Conjecture
The Collatz conjecture concerns what happens when we take any positive integer $n$ and apply the following algorithm:
* If $n$ is even, $n = n / 2$
* If $n$ is odd, $n = 3 \times n + 1$

The conjecture states that all positive integers will eventually reach 1.

## Features
* **Process Management**: Utilizes `fork()` for process creation and `wait()` for process synchronization.
* **Child Execution**: Offloads the computational logic of the Collatz sequence to a child process.
* **Input Validation**: Includes error checking to ensure only valid positive integers are processed.

## Getting Started
### 1. Build the Project
Enter the project folder and use the provided Makefile to compile the source code:
```bash
make
```
### 2. Run the Program
Run the program by passing a positive integer as a command-line argument:
```bash
./collatz 35
```

### 3. Verify the result
Expected output:
```
The Collatz sequence for 35 is: 35 106 53 160 80 40 20 10 5 16 8 4 2 1
```

## File Structure
* `collatz.c`: The main C source code containing the process logic and Collatz algorithm.
* `Makefile`: Build script for compiling and cleaning the project.
* `README.md`: Project documentation.
* `snapshot`: Test results.