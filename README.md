# Holbertonschool-printf
## _printf:

In our First Holberton school group project pair programing we work on making our own printf,
We make it From 0 to 100 by using VS CODE and VIM.

## Description: 

`_printf` is a custom implementation of the C programming function printf. Similar to the printf (3) - Prints formatted data to stdout
(a reformuler)

Printf() function is often used to our program to do formatted output. All variants of printf function use the same formatting techniques. There is a string that specifies the layouts of output is call format specifier.
## Function prototype
```{r mon_bloc, echo = FALSE, WARNING = TRUE}

int _printf(const char *format, ...);
```
where format can be a simple string without any specifiers or it can contain specifiers and the arguments corresponding to them.
## Implemented format specifiers
 
R>library(knitr)
	kable(tab)

Specifier:

Output:

Example:

c:

Character
H
s:

String
Hello World
d:

decimal integer
100
i:

decimal integer
100
%:

A % followed by another
%

 
>Check the Man Page for detailed usage.
## Algorithm and logic behind this
* Check this flowchart explaining the functions flow
> Compilation and testing

## We are compiling via:
```{r mon_bloc, echo = FALSE, WARNING = TRUE}
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
## What our file stand for:

* [Main.h](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/main.h) : Header file
* [Get_function.c](https://github.com/HanaOuerghemmi/holbertonschool-printf/blob/main/get_function.c):  This file contains the functions to handle each argument type.
* []

## Functions used:

* write
* va_start
* va_end
* va_copy
* va_arg
 
## Authors:
* hana Ouerghemmi
* aya aribi
 
