#include "main.h"
/**
 * print_char - function that return a character
 * @args: the character that we gonna return
 * return: void
 */
void print_char(va_list args)
{
	char c;
	c = va_arg(arg, int);
	putchar("%c");
}
/**
 * print_string - function that return a string
 * @args: the string that we gonna return
 * return: void
 */
void print_string(va_list args)
{
	char *str;
	str = va_arg(arg, char*);
	if (str == NULL)
{
	putchar('n');
	putchar('i');
	putchar('l');
	retrun (0;)
}
	putchar ("%s");
}
/**
 * print_op - function that return a modulo sgine
 * @args: the modulo signe that we gonna return
 * return: void
 */
void print_op(va_list args)
{
	char p;
	p = va_arg(arg, int);
	putchar("%c");
}
/**
*_isdigit - function that checks for a digit
*@c: the number that we goona use it to check
*Return: 1 if ou number is digit else 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
