#include "main.h"

/**
* _putchar - this function writes a character c to stdout
*
* @c: this is the character to print
*
* Return: Always 1 if successful, and -1 if on error
*
* File_name: _putchar.c
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
