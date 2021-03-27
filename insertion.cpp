#include<iostream>

using namespace std;

int main()
{
	int n,array[100], i,j, temp, count=0;
	
	cout<<"Enter total elements\n";
	cin>>n;
	
	cout<<"enter "<<n<<" integers\n";
	for( i=0; i<n; i++)
	{
		cin>>array[i];
	}
	
	for( i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				count++;
			}
		}
	}
	
	cout<<"Sorted array is \n";
	for( i =0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
	
	cout<<"count is : "<<count<<endl;
		
	return 0;
}
