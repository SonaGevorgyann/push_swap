# push_swap

**push_swap** is a sorting algorithm project developed as part of the **42 School** curriculum. The objective is to sort a stack of integers in ascending order using **two stacks** and a restricted set of operations while producing the **minimum possible number of moves**. The project emphasizes algorithm optimization, data structures, and efficient problem-solving.

## Features

* Efficient stack-based sorting
* Two-stack implementation (`a` and `b`)
* Optimized sorting strategy to minimize operations
* Input validation and error handling
* Support for positive and negative integers
* Detection of duplicate and invalid input values
* Memory-safe implementation

## Allowed Operations

The program sorts numbers using only the following operations:

| Operation | Description                                  |
| --------- | -------------------------------------------- |
| `sa`      | Swap the first two elements of stack A       |
| `sb`      | Swap the first two elements of stack B       |
| `ss`      | Perform `sa` and `sb` simultaneously         |
| `pa`      | Push the top element from stack B to stack A |
| `pb`      | Push the top element from stack A to stack B |
| `ra`      | Rotate stack A upwards                       |
| `rb`      | Rotate stack B upwards                       |
| `rr`      | Rotate both stacks upwards                   |
| `rra`     | Reverse rotate stack A                       |
| `rrb`     | Reverse rotate stack B                       |
| `rrr`     | Reverse rotate both stacks                   |

## Technologies

* C
* Makefile
* GCC / Clang
* Custom Libft Library

## Project Structure

```text
push_swap/
├── includes/
├── src/
├── utils/
├── libft/
├── Makefile
└── push_swap.h
```

## Getting Started

### Clone the repository

```bash
git clone https://github.com/SonaGevorgyann/push_swap.git
cd push_swap
```

### Build

Compile the project:

```bash
make
```

This generates the executable:

```text
push_swap
```

## Usage

Run the program by providing a sequence of integers:

```bash
./push_swap 3 2 5 1 4
```

The program outputs the sequence of operations required to sort the stack.

Example:

```text
pb
ra
sa
pa
```

To verify the result using the 42 checker:

```bash
ARG="3 2 5 1 4"
./push_swap $ARG | ./checker $ARG
```

If the output is correct, the checker will display:

```text
OK
```

## Learning Outcomes

Through this project, I strengthened my understanding of:

* Sorting algorithms
* Algorithm optimization
* Stack data structures
* Time and space complexity
* Parsing and input validation
* Memory management in C
* Modular software design

## Future Improvements

* Further optimize the number of operations
* Add performance benchmarking tools
* Visualize sorting steps
* Support additional sorting strategies for comparison

## Author

**Sona Gevorgyan**

GitHub: https://github.com/SonaGevorgyann
