#include "main.h"

/**
* printB - this function prints a decimal number in binary
* @arg: this is the argument accepted and its an integer
* Return: the number of digits printed
*/

int printB(va_list arg)
{
	unsigned int b = va_arg(arg, unsigned int);
	int d = 0;
	unsigned int bitPosition = 1 << (sizeof(unsigned int) * 8 - 1);
	int l_zero = 1;

	if (b == 0)
	{
		_putchar('0');
		d++;
	}
	else
	{
		while (bitPosition)
		{
			if (b & bitPosition)
			{
				l_zero = 0;
				_putchar('1');
				d++;
			}
			else if (!l_zero)
			{
				_putchar('0');
				d++;
			}
			bitPosition >>= 1;
		}
	}
	return (d);
}
