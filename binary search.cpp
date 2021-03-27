#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,first,last,middle,n,search,a[100];

    cout<<"Enter number of elements\n";
    cin>>n;

    cout<<"Enter "<<n<<" integers\n";
    for(c = 0;c<n;c++)
    {
        cin>>a[c];
    }
    cout<<"Enter val;ue to be searched\n";
    cin>>search;

    first = 0;
    last = n-1;
    middle = (first + last) / 2;

    while(first <= last)
    {

        if(a[middle] < search)
            first = middle + 1;
        else if ( a[middle] == search)
        {
            cout<<search<<" is found at location "<<middle + 1 ;
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;

    }

    if(first > last)
    {
        cout<<search<<" Not found in the given list."<<endl;
    }

    return 0;
}

