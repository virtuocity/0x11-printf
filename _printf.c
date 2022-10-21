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
		while (*s != '%')
		{
			write(1,*s,1);
			*s++;
		}
	
		switch(*s)
		{
			case 'c' : i = va_arg(valist,int);
			   	write(1,*s,1);
			   	break;
			case 's' : s = va_arg(valist,char *);
			   	while (*s  = '\0')
			   	{
				   	write(1,*s,1);
				   	*s++;
				}
			   	break;
		}
	}
	va_endarg();
	free(s);
}
