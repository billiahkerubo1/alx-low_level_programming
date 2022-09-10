#include <stdio.h>
int main (void)
{
	int ch;
	clrscr();
	/*print lower case*/
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
	putchar('\n');
	/*print uppercase letters*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		putchar('\n');
		return (0);
	}

}
