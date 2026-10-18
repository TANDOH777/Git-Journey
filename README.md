# Cpp-Student-GPA-System

## Description
A C++ program demonstrating Object-Oriented Programming concepts (classes, constructors, encapsulation) alongside a simple shape area calculator. This repository contains two example programs based on lecture notes: one for calculating areas of shapes and one for managing a student's GPA using a `Student` class.

## Files Included
- [ShapeAreaCalc.c++](ShapeAreaCalc.c++) — Shape area calculator (rectangle, circle, cuboid surface area, triangle) using structs and function overloading.
- [StudentGpaCalc.c++](StudentGpaCalc.c++) — Demonstrates a `Student` class with private members, constructor validation, and public getters/setters for GPA management.

## Requirements
- A C++ compiler such as `g++` (MinGW on Windows, GCC on Linux/macOS) supporting C++11 or later.

## Build & Run
Open a terminal in the project root (`c:\Users\Administrator\Desktop\Git-Journey`) and run the following commands.

Windows (MinGW / Command Prompt / PowerShell):

```bash
# Build
g++ -std=c++17 ShapeAreaCalc.c++ -o ShapeAreaCalc.exe
g++ -std=c++17 StudentGpaCalc.c++ -o StudentGpaCalc.exe

# Run
.\\ShapeAreaCalc.exe
.\\StudentGpaCalc.exe
```

Linux / macOS:

```bash
# Build
g++ -std=c++17 ShapeAreaCalc.c++ -o ShapeAreaCalc
g++ -std=c++17 StudentGpaCalc.c++ -o StudentGpaCalc

# Run
./ShapeAreaCalc
./StudentGpaCalc
```

## Notes
- `StudentGpaCalc.c++` enforces GPA validity in the constructor (values between 0.0 and 4.0). Use the public methods to access or update the GPA.
- `ShapeAreaCalc.c++` shows simple `struct` usage and function overloading for area calculations. The cuboid example computes total surface area.

## Contributing
Contributions and improvements are welcome. Open an issue or submit a pull request with a clear description of changes.

## License
This project is released under the MIT License. See LICENSE for details.
