#include<iostream>
using namespace std;
int main()
{
	int x,y,z,t,count, count1;
	cin>>t;
	while( t > 0 )
	{
		count = 0, count1 = 0;
		cin>>x>>y>>z;
		
		while( z > 1 )
		{
			
			if( x % z == 0 || z % x == 0)
			{
				x--;
				count++;
			}
			else if( y % z == 0 || z % y == 0)
			{
				y--;
				count1++;
			}
			else
			{
				z--;
			}
		
		}
		cout<<count<<count1;
		t--;
	}
	
	
	
	return 0;
}
