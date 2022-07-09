#include "main.h"
/**
 * _pbinary - Function that convert an integer to binary
 * @arg: the argument
 * Return: 1
 */
int _pbinary(va_list arg)
{
	unsigned int binary[32];
	int i = 0;
	unsigned int n = 0, c = 0;

	n = va_arg(arg, unsigned int);

	if (n <= 1)
	{
		_putchar(n + '0');
		c++;
	}
	else
	{
		while (n > 0)
		{
			binary[i] = n % 2;
			n = n / 2;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(binary[i] + '0');
			c++;
		}
	}
	return (c);
}

/**
 * _printu- function that print s unsigned integer
 * @u: the argument
 * Return: number of charactere printed
 */
int _printu(va_list u)
{
	unsigned int i, num, div, o, n, c;

	n = va_arg(u, unsigned int);
	o = n % 10;
	n = n / 10;
	div = 1;
	num = n;

	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			div = div * 10;
		}
		while (div >= 1)
		{
			i = n / div;
			_putchar(i + '0');
			c++;
			n = n % div;
			div = div / 10;
		}
	}
	_putchar(o + '0');
	c++;
	return (c);
}

/**
 * _printo - Function that print octal
 * @arg: the argument
 * Return: 1
 */
int _printo(va_list arg)
{
	unsigned int octal[11];
	int i = 0;
	unsigned int n = 0, c = 0;

	n = va_arg(arg, unsigned int);

	if (n == 0)
	{
		_putchar(n + '0');
		c++;
	}

	while (n > 0)
	{
		octal[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(octal[i] + '0');
		c++;
	}

	return (c);
}

/**
 * _printx - Function that convert an decimal to hexadecimal in lowercase
 * @arg: the argument
 * Return: 1
 */
int _printx(va_list arg)
{
	unsigned int hexa[20];
	int i = 0;
	unsigned int n = 0, c = 0;

	n = va_arg(arg, unsigned int);

	if (n == 0)
	{
		_putchar(n + '0');
		c++;
	}

	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexa[i] = 87 + (n % 16);
		else
			hexa[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hexa[i]);
		c++;
	}

	return (c);
}

/**
 * _printX - Function that convert an decimal to hexadecimal in UPPERCASE
 * @arg: the argument
 * Return: 1
 */
int _printX(va_list arg)
{
	unsigned int hexa[20];
	int i = 0;
	unsigned int n = 0, c = 0;

	n = va_arg(arg, unsigned int);

	if (n == 0)
	{
		_putchar(n + '0');
		c++;
	}

	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexa[i] = 55 + (n % 16);
		else
			hexa[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hexa[i]);
		c++;
	}

	return (c);
}


