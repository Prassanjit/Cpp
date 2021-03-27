#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int menu[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
	cin>>t;
	while(t>0)
	{
	    int money, plate = 0, i;
	    cin>>money;
	    while (money>0)
	    {
	        for (i=11;i>=0;i--)
	        {
	            if (money >= menu[i])
	            {
	                plate += money/menu[i];
	                money= money% menu[i];
	                cout<<plate<<endl;
	            }
	        }
	        
	    }
	 t--;   
	}
	
	return 0;
}

