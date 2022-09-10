#include <stdio.h>
#include <time.h>
int main(void)
{
	int n,digit;
	srand(time(0));
	n = rand()-RAND_MAX / 2;
	printf("Enter the digit: ");
	scanf("%d",$n);

	digit = n % 10;
	printf("Last digit of n is: %d", n, digit);
	printf(n);
	
	if (digit > 5){
		printf("Last digit of n is %d,n, and is greater than 5");
	
	}else if (digit == 0){
		printf("Last digit of n is %d,n and is 0")
	}else(digit < 6 and digit != 0){
		printf("Last digit of n is %d, n, and is less than 6 and not 0")}
}
