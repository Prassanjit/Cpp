#include<iostream>
using namespace std;
int main() {
  // dimensions
  int N = 3;
  int M = 3;
 
  // dynamic allocation
  int** ary = new int*[N];
  for(int i = 0; i < N; ++i)
      ary[i] = new int[M];
 
  // fill
  for(int i = 0; i < N; ++i)
    for(int j = 0; j < M; ++j)
      cin>>ary[i][j];
 
  // print
  for(int i = 0; i < N; ++i)
  {
	  for(int j = 0; j < M; ++j)
      cout << ary[i][j];
      
    cout<<"\n";
}
  // free
  for(int i = 0; i < N; ++i)
    delete [] ary[i];
  delete [] ary;
 
  return 0;
}
