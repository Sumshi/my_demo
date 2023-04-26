#include "main.h"
/**
 * _printf - prints a function
 *@format: list of types of arguments passed to the function
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':/*for character*/
				char c = va_arg(args, int);
				putchar(c);
				break;

			case 's':/*string*/
				s = va_args(args, char*);
				if (s == NULL)
					return(NULL);
				else
					return(s);
				putchar(s);
			case '%':
				putchar('%');
		}
		i++;
	}
	va_end(args);
}
