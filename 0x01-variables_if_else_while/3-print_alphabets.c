#include <stdio.h>
int main (void)
{
        char ch;

	/*print lower case*/
	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);
		putchar('\n');
	/*print uppercase letters*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	
		putchar(ch);
	
	return (0);
	

}
