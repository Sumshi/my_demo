#include "main.h"
/**
 * _printf - printf function
 * @format: list of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char *s;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')/*before specifier percent*/
		{
			format++;
			switch (*format)
			{
				case 'c':/*as in character*/
					count += print_char((char)va_arg(args, int));
					break;
				case 'd':/*as in decimal*/
					count += print_number(va_arg(args, int));
					break;
				case 'i':
					count += print_number(va_arg(args, int));
					break;
				case 's':
					if (*s == NULL)
						return (-1);
					count += _print_string(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;

			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
