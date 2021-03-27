#include<stdio.h>
int main()
{
	int x[] = {1,2,3,4,5,6};
	int i;
	int *p;
	p = x;
	
	printf("p[0] = %d\n",p[0]);
	printf("x = %d\n", x);
	printf("x+1 = %d\n",(x+1));
	printf("*(x+1) = %d\n",*(x+1));// *x+1 = x[1]
	printf("x[0] = %d\n",x[0]);// *x = x[0]
	printf("x[1] = %d\n",x[1]);
	
	for(i = 5; i>=0; i--)
	{
		printf("*(x+1) = %d\n",*(x+1));
		printf("p[%d] = %d\n",i,p[i]);
	}
	
}
