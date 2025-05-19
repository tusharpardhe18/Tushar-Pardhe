# C++ Practice Problems

This project includes solutions to four basic C++ problems designed for practicing class-based programming, loop logic, and data structures such as arrays and maps.

## 🧮 Problem 1: Calculator Using Class

A simple calculator implemented using a C++ class. It supports:

- Addition
- Subtraction
- Multiplication
- Division

### 🔧 Usage

The Calculator class takes three inputs:

- `a`: First operand (double)
- `b`: Second operand (double)
- `operation`: A string indicating the operation (`add`, `subtract`, `multiply`, `divide`)

Example:
```cpp
Calculator calc(10.5, 5.2, "add");
double result = calc.calculate();
```

## 🧮 Problem 2: Odd Number Series (1 to 2a−1)

For a given integer input `a`, the program prints the first `a` odd numbers:

Example:
```cpp
Input: a = 4
Output: 1, 3, 5
```

## 🧮 Problem 3: Filtered Odd Series

For a given integer input `a`, the program prints all odd numbers up to `a`, excluding even maximums:

Example:
```cpp
Input: a = 6
Output: 1, 3, 5, 7, 9
```

## 🧮 Problem 4: Count Multiples (1 to 9)

Given a list of integers, the program counts how many elements are divisible by each digit from 1 to 9.

Example:
```cpp
Input: [1,2,8,9,12,46,76,82,15,20,30]
Output: {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
```
