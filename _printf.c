#include "main.h"

/**
* _printf - function that acts exactly like printf
* @format: format
* Return: num_char, number of characters
*/

int _printf(const char *format, ...)
{
	int a, b, num_char = 0;
	va_list arg;

	PrintInstruction array[] = {
		{"c", printC}, {"s", printS}, {"%", printP}, {"d", printDec}, {"u", printUn},
		{"i", printDec}, {"b", printB}, {"S", printS}
	};
	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (a = 0; format[a]; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
			num_char++;
		}
		else
		{
			if (format[a + 1] == ' ' || format[a + 1] == '\0')
				return (-1);
			for (b = 0; b < sizeof(array) / sizeof(array[0]); b++)
			{
				if (*(format + a + 1) == *(array[b].c))
					break;
				if (b < sizeof(array) / sizeof(array[0]))
				{
					num_char += array[b].pr_Fntn(arg);
					b++;
				}
				else
				{
					_putchar(format[a]);
					num_char++;
				}
			}
		}
	}
	va_end(arg);
	return (num_char);
}
