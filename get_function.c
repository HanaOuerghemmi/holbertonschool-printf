/* this file containe the function to print the specified type*/


#include "main.h"


/**
 * print_char - function that print a character
 * @args: the arguments
 * Return: 1
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - function that print a string
 * @args: the arguments
 * Return: number of charcter printed
 */
int print_string(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char*);

	if (str == NULL)
		str = "(NULL)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);

}


/**
 * print_pers - function that print a % sgine
 * @args: the argument
 * Return: 1
 */
int print_pers(va_list args)
{
	(void) args;

	_putchar('%');
	return (1);
}


/**
*print_int - function that print a decimal or an integr number
*@args: the arguument
*Return: 1 if ou number is digit else 0
*/
int print_int(va_list args)
{
	int n, i, x, rest;

	n = va_arg(args, int);
	i = 0;
	rest = 1;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
		i++;
	}
	while ((x / rest) > 0)
	{
		rest = rest * 10;

	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		i++;
	}
	return (i);

}
