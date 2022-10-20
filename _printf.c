#include "main.h"

/**
  *_printf - print formatted text to stdout
  *
  *@format:formatted string input
  *Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	unsigned int i;

	for (i = 0;*(s + i) != '\0';i++)
		write(1,&s[i],1);
	
	write(1,"\n", 1);
}
