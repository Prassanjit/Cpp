#include<fstream>
using namespace std;
int main()
{
	int a = 22;
	ofstream obj("Today.txt",ios::out);
	
	obj<<"Hello World"<<endl;
	obj<<"I m Prassanjit Mittal"<<endl<<" and my age is "<<a;
	
	obj.close();
}
