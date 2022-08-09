#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: constant pointer value of strngs
 * Return: the number of characters printed
 * excluding null byte at end
 */

int _printf(const char *format, ...)
{
	int cntelem = 0;
	int i;
	va_list n;

	va_start(n, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			cntelem += _putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
				cntelem += _putchar(va_arg(n, int));
				break;
				case 's':
				cntelem += handl_s(va_arg(n, char *));
				break;
				case '%':
				cntelem += _putchar('%');
				break;
				default:
				break;
			}
		i += 2;
		}
	}
	return (cntelem);
}

