#include<iostream>

using namespace std;
int count = 0;
class alpha
{
	
	public:
			alpha()
			{
				count++;
				cout<<"Object "<<count<<" created\n";
			}
			~alpha()
			{
				cout<<"Object "<<count<<" destroyed\n";
				count--;
			}
};

int main()
{
	cout<<"In Main\n\n";
	alpha a,a1;
	{
		alpha a3;
	}
	{
		alpha a4;
	}
	
	cout<<"Re-Enter in Main\n\n";
	
	return 0;
}
