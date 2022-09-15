#include "main.h"

int largest_number(int a, int b, int c)
{

	if (a >= b && b >= c)
	
		printf("%d is the largest number.", a);

	if (b >= a && b >= c)
		printf("%d is the largest number.", b);

	if (c >= a && c >= b)
		printf("%d is the largest number.", c);

	return 0;

}
