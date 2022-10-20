#include "main.h"

/**
  *_printf - print formatted text to stdout
  *
  *@format:formatted string input
  *Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	char *s;
	char *c;
	unsigned int i;
	
	if (format == NULL)
		return (1);
	s = (char *)malloc(sizeof(format));
	i = 0;
	va_list valist;
	va_start(valist,format);
	for (s = format; *s != '\0'; s++)
	{
		while (*(s + i) != '%')
		{
			write(1,&s[i],1);
			i++;
		}
	
	write(1,"\n", 1);
}
