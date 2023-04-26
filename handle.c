#include "main.h"
#include <stdio.h>
/**
 * handle_S_conversion - handles conversion
 * @str: parameter
 * Return: void
 */
int handle_S_conversion(char *str)
{
	int i = 0;
	int count = 0;
	char hex[3] = {0};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			hex[0] = '\\';
			hex[1] = 'x';
			hex[2] = "0123456789ABCDEF"[((unsigned char) str[i]) >> 4];
			count += _putchar(hex[0]);
			count += _putchar(hex[1]);
			count += _putchar(hex[2]);
			hex[2] = "0123456789ABCDEF"[((unsigned char) str[i]) & 0xF];
			count += _putchar(hex[2]);
		}
		else
		{
			count += _putchar(str[i]);

		}
	}

	return (count);
}
