/*
 * Project: Collatz Conjecture Implementation
 * Authors: Kuan, Chin-Wei (官京緯)
 * Date: March 29, 2026
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Part 1: Validate input

    // Check if user enters exactly one argument
    if (argc != 2) {
        fprintf(stderr, "Please enter in the following format: %s <positive integer>\n", argv[0]);
        return 1;
    }

    // Convert the input string to an integer and validate it
    int n = atoi(argv[1]);
    if (n <= 0) {
        fprintf(stderr, "Please enter a positive integer.\n");
        return 1;
    }

    // Part 2: Create a child process
    pid_t pid = fork();

    if (pid < 0) {  // Check if fork() was successful
        fprintf(stderr, "Fork failed.\n");
        return 1;
    }
    else if (pid == 0) {    // Child process: Generate the Collatz sequence
        printf("The Collatz sequence for %d is: ", n);
        while (n != 1) {
            printf("%d ", n);
            if (n % 2 == 0) n /= 2;
            else n = 3 * n + 1;
        }
        printf("1\n");
        exit(0); // Sequence completed. Exit the child process
    }
    else wait(NULL);    // Parent process: Wait for the child process to finish

    return 0;
}