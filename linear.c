#include<stdio.h>
int main()
{
	int a[10] = { 23,45,54,67,89,99,88,56,123,29 };
	int i, item;
		printf("Enter element to be searched in array");
	scanf("%d",&item);
	
	for(i = 0; i<10; i++)
	{
		if(a[i] == item)
		{
			printf("%d Element found at %d position",item,i+1);
			break;
		}
	}
	if(i == 10)
	printf("Element not in list.");
	
	return 0;
}
