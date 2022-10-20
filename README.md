# 0x10-printf
## Notes And Thoughts
The function printf writes stdout to the standard output stream. In the most simple case,printf takes a   
string of characters and it's printed as they appear.

**Formatted printing is at the heart of printf.**  

The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged  
to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent  
arguments.

Each *conversion specification* is introduced by the character %, and ends with a *conversion specifier*.  In  
between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision  
and an optional length modifier.
