#include<iostream>

using namespace std;

int main()

{
	int a[100],n,i,j,temp,pos, count = 0;
	
	cout<<"Enter total elements for array";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<(n-1);i++)
	{
		pos = i;
		
		for(j=i+1; j<n;j++)
		{
			if(a[pos] > a[j])
			pos = j;
		}
		
		if(pos != i)
		{
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp;
			count++;
		}
	}
	
	cout<<"Sorted list is\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	
	
	cout<<"Count is : "<<count<<endl;
	
	return 0;
}
