#include "main.h"
/**
 * _printrev - function that print a string in reverse
 * @arg: te argument
 * Return: int
 */
int _printrev(va_list arg)
{
	char *str;
	int i, j;

	i = 0;
	str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	return (i);
}

/**
 * _prot13 - function that print the 13ed rot of a string
 * @arg: the argument
 * Return: int
 */
int _prot13(va_list arg)
{
	int i = 0;
	char *str;

	str =  va_arg(arg, char *);

	if (str == NULL)
		return (-1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			if ((str[i] >= 110) || (str[i] >= 78 && str[i] <= 90))
			{
				_putchar(str[i] + 13);
				i++;
			}
			else
			{
				_putchar(str[i] - 13);
				i++;
			}
		}
		else
			_putchar(str[i]);
			i++;
	}
	return (i);

}
