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
<<<<<<< HEAD
	unsigned int bitPosition;
=======
	unsigned int bitPosition = 1 << (sizeof(unsigned int) * 8 - 1);
>>>>>>> f79b0567f31070ec6169b30b7b180d62b82d6ee6
	int l_zero = 1;

	if (b == 0)
	{
		_putchar('0');
		d++;
	}
	else
	{
<<<<<<< HEAD
		bitPosition = 1 << (sizeof(unsigned int) * 8 - 1);
=======
>>>>>>> f79b0567f31070ec6169b30b7b180d62b82d6ee6
		while (bitPosition)
		{
			if (b & bitPosition)
			{
<<<<<<< HEAD
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
=======
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
>>>>>>> f79b0567f31070ec6169b30b7b180d62b82d6ee6
	}
	}
	return (d);
}
