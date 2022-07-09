/* this file contain the function get all that chckthe symbol opt*/
#include "main.h"


/**
 * _get_all - function that check symbol
 * @c: char
 * @arg: argument type va_list
 * Return: int
 */
int _get_all(const char c, va_list arg)
{
	int i = 0, j = 0;

	symbol_s s[] = {
		{'c', _pchar},
		{'s', _pstring},
		{'i', _pint},
		{'d', _pint},
		{'%', _ppers},
		{'b', _pbinary},
		{'u', _printu},
		{'o', _printo},
		{'x', _printx},
		{'X', _printX},
		{'r', _printrev},
		{0, NULL}
	};

	while (s[i].op != 0)
	{
		if (s[i].op == c)
		{
			j = j + s[i].f(arg);
			return (j);
		}

		i++;
	}
	if (s[0].op != c)
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}
	return (0);
}
