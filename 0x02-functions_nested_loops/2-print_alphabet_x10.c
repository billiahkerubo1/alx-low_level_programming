#include <stdio.h>
int main (void)
{
	int count = 0;
	char letter;

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
			
		
		putchar('\n');
		count++;
		
	}
	return (0);
}
