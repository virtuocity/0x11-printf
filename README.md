# 0x10-printf
## Notes And Thoughts
The function printf writes stdout to the standard output stream. In the most simple case,printf takes a   
string of characters and it's printed as they appear.

**Formatted printing is at the heart of printf.**  

The format string is composed of zero or more directives: ordinary characters (not %), which are copied  
unchanged to the output stream; and conversion specifications, each of which results in fetching zero or  
more subsequent arguments.  

Each *conversion specification* is introduced by the character %, and ends with a *conversion specifier*.  In  
between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision  
and an optional length modifier.   

The format string contains two different types of things:  
1. Ordinary characters, which are sent to the standard output stream 
2. Conversion specifications or format specifiers, each of which causes conversion and printing of the corresponding  
argument to printf.   
e.g 
		
		printf ("I am Woche");
		printf("I am no %d", 5);  

### Variadic Functions
printf is a variadic function , it takes a variable number of arguments(hence *varargs*) as formatted string. Hence the  
prototype:
	int _printf(const char *format, ...);

## Pseudocode
+ get string input

