#include "main.h"
/**
 *_printf - our own printf function
 *@format: the format specifier
 *Return: int
 */
int _printf(const char *format, ...)
{
	va_list arg;
	 int i = 0, j = 0, k = 0;

	va_start(arg, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);


	while (format[i] && format)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			j++;
		}
		if (format[i] == '%')
		{
			k = _get_all(format[i + 1], arg);
			if (k != 0)
			{
				j = j + k;
				i = i + 2;
				continue;
			}

			if (format[i] == '\0')
			{
				_putchar(format[i]);
				j++;
				return (-1);
			}
		}
		i++;
	}
	va_end(arg);
	return (j);

}
