# Collatz Conjecture with Process Management

## 1. Team Members and Responsibility
As this is an individual assignment, all tasks were performed by a single member:
* **Kuan, Chin-Wei (官京緯)**: 隨班附讀( ID: 114054811)

---

## 2. Project Overview

This project implements the **Collatz conjecture** algorithm in C using Unix system calls. The program forks a **child process** to generate the sequence, while the **parent process** invokes `wait()` to ensure synchronized execution and proper resource cleanup.

### Collatz Conjecture Logic
The Collatz conjecture concerns what happens when we take any positive integer n and apply the following algorithm:
* If n is even, n = n / 2
* If n is odd, n = 3 * n + 1

The conjecture states that all positive integers will eventually reach 1.

---

## 3. Features
* **Process Management**: Demonstrates process creation via `fork()` and synchronization via `wait()`.
* **Isolated Execution**: Computational logic is strictly contained within the child process.
* **Robust Validation**: Ensures command-line arguments are present and are positive integers (n > 0).

---

## 4. Compilation and Configuration Instructions

### Environment
* **OS**: Developed on **macOS (Apple Silicon)**; compatible with Unix-like systems (Linux/BSD).
* **Requirements**: `gcc` or `clang` compiler.

### Build the Project
Enter the project folder and use one of the following command to compile:
#### Method A. Using Makefile(Recommended):
```bash
make
```
#### Method B. Direclty command to complie
```bash
gcc collatz.c -o collatz
```

### Run the Program
Run the program by passing a positive integer as a command-line argument:
```bash
./collatz 35
```

### Verification
When running `./collatz 35`, the expected output:
```
The Collatz sequence for 35 is: 35 106 53 160 80 40 20 10 5 16 8 4 2 1
```

## 5. Test results
### a. Basic feature(Normal Case)
![alt text](<./snapshot/01_basic feature.png>)
### b. Error handling: Missing Argument
![alt text](<./snapshot/02_error handling_no integer.png>)
### c. Error handling: Non-postive integer
![alt text](<./snapshot/03_error handling_not positive integer.png>)
---

## 6.File Structure
* `collatz.c`: Core source code (Process logic & Collatz algorithm).
* `Makefile`: Automation script for compilation and cleanup.
* `README.md`: Project documentation.
* `snapshot/`: Directory containing execution screenshots.

---

**Author:** Kuan, Chin-Wei (官京緯)  
**Date:** March 30, 2026