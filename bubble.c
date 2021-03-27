#include<stdio.h>
int main()
{
	int a[] = {34,12,67,54,7,9,5,22};
	
	int i,j,temp = 0;
	
	for (i = 0; i<7; i++)
	{
		for(j = 0; j<7; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i<8; i++)
	printf("%d\n",a[i]);
	
	return 0;
	
}



