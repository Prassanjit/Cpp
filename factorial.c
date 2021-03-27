#include<stdio.h>
long int fact(int n);

int main()
{
	int n;
	printf("Enter the no.");
	scanf("%d",&n);
	printf("Factorial is = %ld",fact(n));
	
	return 0;
}

long int fact(int num)
{
	if (num >= 1)
	{
		return (num * fact(--num));
	}
	else
	{
		return 1;
	}
}
