#include <stdio.h>
long factorial(long);

int main()
{
	long int res = 0;
	res = factorial(5);
	printf("Factorial is = %ld",res);
	return 0; 
}

long factorial (long num)
{
	if (num > 0)
		return (num * factorial(--num));
		
	else
		return 1;
}
