#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct CharPrint - Handles printing task
* @c: format specifier
* @pr_Fntn: function pointer
*/
typedef struct CharPrint
{
	char *c;
	int (*pr_Fntn)(va_list arg);
} PrintInstruction;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int printC(va_list arg);
int printP(va_list arg __attribute__((unused)));
int printS(va_list arg);

#endif
