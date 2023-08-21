#include "main.h"

/**
* printDec - this function prints signed integers
* @arg: this is the argument to be printed
* Return: number of digits printed
*/

int printDec(va_list arg)
{
	long int b = va_arg(arg, int);
	long int d = 0;

	if (b < 0)
	{
		_putchar('-');
		b = -b;
		d++;
	}
	d = printDigit(b, d);

	return (d);
}

/**
* printDigit - this function prints digits of an integer
* @b: Integer
* @d: length
* Return: number of digits printed
*/

int printDigit(long int b, long int d)
{
	if (b / 10)
		d = printDigit(b / 10, d);
	_putchar(b % 10 + '0');
	d++;

	return (d);
}

/**
* printUn - this function prints an unsigned integer
* @arg: argument to be printed
* Return: number of digits printed
*/

int printUn(va_list arg)
{
	unsigned int b = va_arg(arg, unsigned int);
	long int d = 0;

	d = printDigitUn(b, d);

	return (d);
}

/**
* printDigitUn - this function prints the digit of an unsigned integer
* @b: Integer
* @d: length
* Return: numbeer of digits printed
*/

int printDigitUn(unsigned int b, long int d)
{
	if (b / 10)
		d = printDigitUn(b / 10, d);
	_putchar(b % 10 + '0');
	d++;

	return (d);
}
