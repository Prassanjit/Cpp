#include<stdio.h>
int main()
{
	int n = 5;
	int *p;// * -> astric
	
	p = &n;    // &-> ampersent
	
	printf("%d\n",&n);  //-10 
	printf("%d\n",n);   // 5
	printf("%d\n",p);   // -10
	printf("%d\n",&p);  // -22
	printf("%d\n",*p);  //  5
	
	printf("%d\n", ++*p);//6
	printf("%d\n", ++p); // -8
	
	printf("%d\n", n);//6
	
	*p = *p + 10;
	printf("%d\n", n);
	printf("%d\n", *p);//6	
	
}




