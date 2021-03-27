#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"precision set to 3 digits \n";
	cout.precision(4);
	cout.width(10);
	cout<<"VALUE";
	cout.width(15);
	cout<<"SORT OF VALUE"<<"\n";
	for(int i=1;i<=5;i++)
	{ 
		cout.width(8);
		cout<<i;
		cout.width(13);
		cout<<sqrt(i)<<"\n";
	}
		cout<<"\n precision set to 5 digits \n";
		cout.precision(5);
		
		cout<<"sqrt(10) = "<<sqrt(10)<<"\n";
		cout.precision(0);
		cout<<"sqrt(10) = " <<sqrt(10)<<"\n";
		return 0;
	}
		

