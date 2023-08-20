#include "main.h"

/**
* printC - function prints a character
* @arg: argument
* Return: 1
*/

int printC(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
* printP - function prints a % symbol
* @arg: argument used here
* Return: 1
*/

int printP(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
* printS - function prints a string
* @arg: argument used here
* Return: the number of character in the string
*/

int printS(va_list arg)
{
	int num_string = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	for (num_string = 0; s[num_string] != '\0'; num_string++)
	{
		_putchar(s[num_string]);
	}

	return (num_string);
}
