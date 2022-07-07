#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
typedef struct {
char op;
char *(*f)(va_list arg);
} symbole;

int _putchar(char c);
void print_char(va_list args);
void print_string(va_list args);
void print_op(va_list args);
int _isdigit(int c);
int _printf(const char *format, ...);