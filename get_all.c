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
				{0, NULL},
				{'b', _pbinary}
	};

	while (s[i].op != 0)
	{
		if (s[i].op == c)
		{
			j += s[i].f(arg);
			return (j);
		}
		i++;
	}
	return (0);
}
