
# ft_printf
*Because ft_putnbr() and ft_putstr() aren’t enough*

### Table of Contents
* **About the project**
* * [Introduction](#introduction)
* * [Capabilities](#capabilities)
* **Usage**
* * [Requirements](#requirements)
* * [Instructions](#instructions)
* [**Goals**](#goals)
* [**Skills**](#skills)

## About the project

### Introduction

This project consists of coding a library that contains a simplified version (more information below) of the printf function.

### Capabilities

Our version of the printf function will be called  `ft_printf`, and will be able to work with the following inputs:
| Specifiers | Description |
|--|--|
| `%` | Prints the percent character |
| `c` | Prints a character |
| `s` | Prints a string (array of characters) |
| `d`,`i` | Prints an integer |
| `p` | Prints pointer address (hex starting with  `0x`)|
| `u` | Prints an unsigned integer |
| `x` | Prints an unsigned hexadecimal integer (lowecase a-f) |
| `X` | Prints an unsigned hexadecimal integer (uppercase A-F) |

Our ft_printf function has the following prototype:

```c
int ft_printf(const char *str, ...);
```

## Usage

### Requirements

The function is written in C language and thus needs the  **`gcc`  compiler**  and some standard  **C libraries**  to run.

### Instructions

**1. Cloning the repositories**

```shell
git clone https://github.com/Neress-dono/Tronc-Commun_42.git 
cd Tronc-Commun_42/ft_printf
```

**2. Compiling the library**

To compile, go to the library path and run:

```shell
$ make
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```c
#include "ft_printf.h"
```

## Goals:

-	Unix logic

## Skills:

-   Rigor  
-   Algorithms & AI

### [Go back](https://github.com/Neress-dono/common-core_42)
