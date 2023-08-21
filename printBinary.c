#include "main.h"

/**
* printB - this function prints a decimal number in binary
* @arg: this is the argument accepted and its an integer
* Return: the number of digits printed
*/

int printB(va_list arg)
{
	long int bitPosition = 1, a = 0;
	long int b = va_arg(arg, int), c = b;
	int d = 0;

	if (b == 0)
	{
		_putchar('0');
		return (1);
	}

	while (c > 0)
	{
		a++;
		c >>= 1;
	}
	bitPosition = 1 << (a - 1);

	while (a > 0)
	{
		if (b & bitPosition)
			d += _putchar('1');
		else
			d += _putchar('0');
		a--;
		bitPosition >>= 1;
	}
	return (d);
}
