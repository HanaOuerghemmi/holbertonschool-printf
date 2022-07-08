#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct  - type symbole
 * @op: the symbole
 * @f: pointer to a function 
 */
typedef struct symbol {
char op;
int (*f)(va_list arg);
} symbol_s;

/* Standard functions*/
int _putchar(char c);
int _strlen(char *s);



/* print the specified type*/
int _pchar(va_list args);
int _pstring(va_list args);
int _ppers(va_list args);
int _pint(va_list args);
void _rec_int(int n);
/*our printf*/
int _printf(const char *format, ...);


#endif

