# CPP02

This repository contains the second C++ module exercises from the 42 curriculum. The goal is to practice class design, operator overloading, fixed-point arithmetic, and conversion between integer/float values in a C++98-compatible implementation.

## Project overview

The project focuses on building a `Fixed` class that stores a number in a fixed-point representation with a constant number of fractional bits.

In this module, we implement:

- Ex00: basic `Fixed` class and raw bit access
- Ex01: conversion constructors and overload of the stream insertion operator
- Ex02: arithmetic, comparison, increment/decrement operators, and static min/max functions

The exercises are split into separate folders:

- `ex00/`
- `ex01/`
- `ex02/`

A copy of the project subject is included at the root as `en.subject.pdf`.

## Exercise breakdown

### ex00 - Basic Fixed class

Implements the core `Fixed` class with:

- a private fixed-point integer value
- a fixed number of fractional bits (`8`)
- default constructor
- copy constructor
- copy assignment operator
- `getRawBits()` and `setRawBits()`
- destructor

This exercise introduces the concept of fixed-point representation and the correct C++ class semantics.

### ex01 - Conversions and output

Extends the `Fixed` class by adding:

- `Fixed(const int)` constructor
- `Fixed(const float)` constructor
- `toInt()` and `toFloat()` conversion methods
- overloaded insertion operator (`<<`) for printing the fixed-point value

This allows the class to convert between fixed-point and native integer/float values cleanly.

### ex02 - Operators and comparisons

Builds on the previous exercises by implementing:

- comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`
- arithmetic operators: `+`, `-`, `*`, `/`
- increment/decrement operators: `++`, `--` (prefix and postfix)
- static `min()` and `max()` functions

This part reinforces operator overloading and correct fixed-point arithmetic behavior.

## Compilation

Each exercise contains its own `makefile` and can be compiled independently.

Example:

```bash
cd ex00
make
./Fixed
```

Or for the other exercises:

```bash
cd ex01
make
./Fixed
```

```bash
cd ex02
make
./Fixed
```

## Make targets

Each `makefile` supports the following common commands:

- `make` : compile the project
- `make clean` : remove object files
- `make fclean` : remove object files and binary
- `make re` : rebuild from scratch
- `make run` : run the compiled executable

## Requirements

- C++98 compatible compiler
- GNU Make
- Linux/macOS environment

## Notes

This project is designed to practice strict adherence to C++ rules, including:

- proper copy semantics
- avoiding accidental implicit conversions
- operator overloading correctness
- clean class design

## Author

Created as part of the 42 School C++ curriculum.
