#include "main.h"

int _printf1(char *str)
{
	unsigned int i;
	for (i = 0; str[i] != '\0'; i++)
	write(1,&str[i],1);
	
}

int main(void)
{
	_printf1("Hello There\n");
	return (0);
}
