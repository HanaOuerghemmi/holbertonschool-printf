#include "main.h"
/**
 * _pbinary - Function that convert an integer to binary
 * @arg: the argument
 * Return: 1
 */
int _pbinary(va_list arg)
{
	unsigned int b[32];
	int i = 0;
	unsigned int n = 0, j = 0;

	n = va_arg(arg, unsigned int);

	if (n <= 1)
	{
		_putchar(n + '0');
		j++;
	}
	else
	{
		while (n > 0)
		{
			b[i] = n % 2;
			n = n / 2;
			i++;
		}
		for (i -= 1; i >= 0; i--)
		{
			_putchar(b[i] + '0');
			j++;
		}
	}
	return (j);
}
