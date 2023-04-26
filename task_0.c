#include "main.h"
/**
 * _printf - function
 * @format: contains types of arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int count = 0;/*stores count*/
	int j;/*for iterating*/
	char *s;
	char c;
	int i, d;
	char buffer[1024];/*1Gb == 1024bytes*/
	int buffer_index = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')/*before specifier percent*/
		{
			format++;
			switch (*format)
			{
				case 'c':/*as in character*/
					c = (char)va_arg(args, int);
					buffer[buffer_index++] = c;
					count++;
					break;
				case 's':/*string*/
					s = va_arg(args, char *);
					for (j = 0; s[j] != '\0'; j++)
						buffer[buffer_index++] = *s;
					count++;
					break;
				case '%':/*percent symbol*/
					buffer[buffer_index++] = '%';
					count++;
					break;
				case 'd':
					d = va_arg(args, int);
					buffer[buffer_index++] = print_number(count);
					count++;
					break;
				case 'i':
					i = va_arg(args, int);
					buffer[buffer_index++] = print_number(count);
					count++;
					break;
				default:
					break;
			}
			/*if (*format == 'd' || *format == 'i')
			{
				_printd(int val);
			}*/
		}
		else
		{
			buffer[buffer_index++] = *format;
			count++;
		}
		format++;
	}
	va_end(args);
	write(1, buffer, buffer_index);
	return (count);
}
