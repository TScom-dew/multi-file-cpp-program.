# Multi-File Student Data Program

This is a simple C++ program that takes student data as input and displays it on the terninal. It is written using multiple files to keep the code clean and organized.

## What It Does:
* **Input:** Takes student name, roll number, and marks from the user.
* **Output:** Displays the complete data as a simple report card.

## Program Structure:
The program is split into 3 simple files:
1. `student.h` - Contains the data structure (`struct`).
2. `student.cpp` - Contains functions for input and output.
3. `main.cpp` - Contains the main menu and loop.

## How to Run:
```bash
g++ main.cpp student.cpp -o program
./program
```
