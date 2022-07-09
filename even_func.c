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
