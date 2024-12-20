<h1><img src="https://raw.githubusercontent.com/ayogun/42-project-badges/refs/heads/main/covers/cover-cpp-bonus.png"></h1> 

## Description
This module focuses on using STL components: containers, templates, iterators, and algorithms.

## Exercise 00: Easy Find

- Objective

  Write a template function `easyfind` to find an integer in a container. Return an iterator to the first occurrence or throw an exception if not found.

- Files
```
ex00/
├── Makefile
├── main.cpp
├── easyfind.h (or easyfind.hpp)
```
## Exercise 01: Span

- Objective
  
  Create a `Span` class to store up to `N` integers. Provide methods to:
- Add numbers (`addNumber`).
- Compute shortest/longest spans (`shortestSpan`, `longestSpan`).

Throw exceptions for invalid operations (e.g., adding beyond capacity).

- Files
```
ex01/
├── Makefile
├── main.cpp
├── Span.h (or Span.hpp)
├── Span.cpp
```
## Exercise 02: MutantStack

- Objective
  
  Extend `std::stack` with iterators. Implement `begin()` and `end()` for iteration while keeping stack functionality.

- Files
```
ex02/
├── Makefile
├── main.cpp
├── MutantStack.h (or MutantStack.hpp)
```
## General Instructions
- Use a `Makefile` for compilation.
- Test thoroughly.
- Follow good coding practices.
