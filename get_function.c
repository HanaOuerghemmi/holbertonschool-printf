/* this file containe the function to print the specified type*/


#include "main.h"


/**
 * _pchar - function that print a character
 * @args: the arguments
 * Return: 1
 */
int _pchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * _pstring - function that print a string
 * @args: the arguments
 * Return: number of charcter printed
 */
int _pstring(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char*);

	if (str != NULL)
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	_putchar('(');
	_putchar('N');
	_putchar('U');
	_putchar('L');
	_putchar('L');
	_putchar(')');

	return (i);

}


/**
 * _ppers - function that print a % sgine
 * @args: the argument
 * Return: 1
 */
int _ppers(va_list args)
{
	(void) args;

	_putchar('%');
	return (1);
}


/**
*_pint - function that print a decimal or an integr number
*@args: the arguument
*Return: 1
*/
int _pint(va_list args)
{
	int i = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;

	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		i += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	_rec_int(m);
	return (i);
}
/**
 * _rec_int - Functtion that print a integer
 * @n: integer to printed
 * Return: void
 */
void _rec_int(int n)
{
	unsigned int i;

	i = n;
	if (i / 10)
		_rec_int(i / 10);
	_putchar(i % 10 +  '0');
}

