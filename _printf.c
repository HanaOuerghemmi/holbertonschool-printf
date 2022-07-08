#include "main.h"

/**
 *_printf - our own printf function
 *@format: the format specifier
 *Return: int
 */
int _printf(const char *format, ...)
{
	int i, j, a = 0, b = 0;
	va_list arg;
	symbol s[] = {
		{'c', _pchar},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'%', print_pers},
		{0, NULL}
	};

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0' && format != NULL)
	{
		if (format[i] == '%')
		{
			format++;
			if (format[i] == 0)
				return (-1);

			j = 0;
			while ((s[j].op != format[i] && s[j].op != 0))
				j++;
			if (s[j].op == format[i])
				a += s[j].f(arg);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				a += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			a++;
		}
		i++;

	}
	va_end(arg);
	return (a + b);

}
