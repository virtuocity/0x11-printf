#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* _printf - func that prints an input to standard output
* @format: the format string
* Return: number of bytes printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args,format);

	//char *s, *separator;
	//separator = "";
	//x = 0;

	//while (format && format[i])
	while (*format != '\0')
	{
        	if (*format == 'd') 
		{
			int i = va_arg(args, int);
			printf("%d\n", i);
		}
		else if (*format == 'c')
		{
            // A 'char' variable will be promoted to 'int'
            // A character literal in C is already 'int' by itself
	    		int c = va_arg(args, int);
			printf("%c\n", c);
		}
		else if (*format == 'f')
		{
			double d = va_arg(args, double);
			printf("%f\n", d);
		}
		format++;
	}

	va_end(args);
}
 
int main(void)
{
	_printf("dcff", 3, 'a', 1.999, 42.5); 
}
	
