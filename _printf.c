#include "main.h"
#include<stdlib.h>
/**
 * _printf - printf function
 * @format: list of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	char c;
	char *s, *S, *r, *R;
	int i, j, d;
	int count = 0;
	unsigned int b, u, o, x, X;
	va_list args;
	void *p;

	j = 0;
	va_start(args, format);
	if (format == NULL || format[j] == '\0')
		return (-1);
	while (format[j] != '\0')
	{

		if (format[j] == '%')/*before specifier percent*/
		{
			j++;
			switch (format[j])
			{
				case 'c':/*as in character*/
					c = (char)va_arg(args, int);
					count += print_char(c);
					break;
				case 'd':/*as in decimal*/
					d = va_arg(args, int);
					count += print_number(d);
					break;
				case 'i':/*signed integer*/
					i = va_arg(args, int);
					count += print_number(i);
					break;
				case 'b':/*integer to binary*/
					b = va_arg(args, unsigned int);
					count += _printbinary(b);
					break;
				case 'u':
					u = va_arg(args, unsigned int);
					count += print_unsigned(u);
					break;
				case 'o':
					o = va_arg(args, unsigned int);
					count += print_octal(o);
					break;
				case 'x':
					x = va_arg(args, unsigned int);
					count += print_hex_lower(x);
					break;
				case 'X':
					X = va_arg(args, unsigned int);
					count += print_hex_upper(X);
					break;
				case 's':/*string*/
					s = va_arg(args, char *);
					if (s == NULL)
						return (-1);
					count += _print_string(s);
					break;
				case 'S':
					S = va_arg(args, char *);
					if (S == NULL)
						S = "(null)";
					count += handle_S_conversion(S);
					break;
				case 'p':
					p = va_arg(args, void *);
					if (p == NULL)
						return (-1);
					count += _print_address(p);
					break;
				case 'r':
					r = va_arg(args, char *);
					if (r == NULL)
						return (-1);
					count += str_rev(r);
					break;
				case 'R':
					R = va_arg(args, char *);
					if (R == NULL)
						return (-1);
					count += print_rot13(R);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					count += _putchar('%');
					count += _putchar(format[j]);
					break;

			}
		}
		else
		{
			count += _putchar(format[j]);
		}
		j++;
	}
	/*_print_string(format);*/
	va_end(args);
	return (count);
}
