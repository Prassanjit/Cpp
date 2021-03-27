#include<iostream>

using namespace std;

int main()
{
	int array[100] , n, i, j,temp , count = 0;
	 
	cout<<"Enter total no. of elements for array\n";
	cin>>n;
	
	for(i=0; i<n; i++)
	cin>>array[i];
	
	for( i = 0 ;i < n ; i++)
	{
		for( j = 0; j<(n-1); j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;	
				count++;
			}	
		}	
	}
	
	cout<<"Sorted array is \n";
	for( i= 0; i < n; i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<"Count = "<<count<<endl;
	return 0;
}
