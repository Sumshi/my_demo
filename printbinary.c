#include "main.h"
#include <stdio.h>
/**
 * _printbinary - prints binary of a num
 * @value: parameter
 * Return: Always 0
 */
int _printbinary(unsigned int value)
{/*value is the number to be converted to binary*/
	int count = 0;
	int i;
	int flag = 0;
	unsigned int p;

	for (i = 31 ; i >= 0 ; i--)
	{
		p = (value >> i) & 1;
		if (p || flag)
		{
			flag = 1;
			_putchar(p + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
