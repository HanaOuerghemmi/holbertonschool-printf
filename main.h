

#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct  - type symbole
 * @op: the symbole
 * @f: pointer to a function 
 */
typedef struct {
char op;
char *(*f)(va_list arg);
} symbole;

/* Standard functions*/
int _putchar(char c);
<<<<<<< HEAD
void print_char(va_list args);
void print_string(va_list args);
void print_op(va_list args);
int _isdigit(int c);
int _printf(const char *format, ...);
=======

/* print the specified type*/
int print_char(va_list args);
int print_string(va_list args);
int print_pers(va_list args);
int print_int(va_list args);

/*our printf*/
int _printf(const char *format, ...);


#endif

>>>>>>> 4dea6d5a35a6dd2d07ce40c39244519316c4354b
