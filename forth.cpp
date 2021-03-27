#include<iostream>

using namespace std;

int main()
{
	char city[20];
	int size = 20;
	
	cout<<"Enter city name\n";
	cin>>city;
	cout<<"City name is : "<<city<<endl<<endl;
	
	cout<<"Enter city name\n";
	cin.getline(city, size,',');
	cout<<"City name is : "<<city<<endl<<endl;
	
	cout<<"Enter city name\n";
	cin.get(city,size,',');
	cout<<"City name is : "<<city<<endl<<endl;
	
	cout<<"Enter city name\n";
	cin>>city;
	cout<<"City name is : "<<city<<endl<<endl;

	cout<<"Enter city name\n";
	cin.getline(city,size,',');
	cout<<"City name is : "<<city<<endl<<endl;

}
