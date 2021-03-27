#include<iostream>
using namespace std;
int avg(int a, int b, int c)
{
	return ((a*b*c)/3);
}

float avg(float a, float b, float c)
{
	return ((a*b*c)/3.0);
}

double avg(double a, double b, double c)
{
	return ((a*b*c)/3.0);
}

int main()
{
	int x = avg(3,4,5);
	cout<<"Reuslt is"<<x<<endl;
	float y = avg(4.0,5.0,6.0);
	cout<<"Reuslt is"<<y<<endl;
	double z = avg(7.86,3.55,9.78);
	cout<<"Reuslt is"<<z<<endl;
	
	return 0 ;
	
}
