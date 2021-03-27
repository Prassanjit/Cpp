#include<iostream>
using namespace std;

class student
	{
		int rollno,p,c,m,total;
		float percentage;
		char name[30];
		public:
			void getdata()
			{
				cin>>rollno;
				cin>>name;
				cin>>p>>c>>m;
			}
			void putdata()
			{
				cout<<"roll number is"<<rollno;
				cout<<"enter name"<<name;
				cout<<"enter marks of physics,chemistry and maths"<<p<<c<<m;
				cout<<"percentage is"<<percentage;
			}
			void Total()
			{
				total=p+c+m;
				percentage=total/3;
			}
	};
		    int main()
		    {
			
		    student s;
			s.getdata();
			s.Total();
		    s.putdata();
		    return 0;
		}
		
