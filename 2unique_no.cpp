#include<iostream>
using namespace std;
int main()
{ int n;
  cin>>n;
  int a[100000];
  int no;
  int res = 0;
  for( int i = 0; i < n; i++)
  {
  	cin>>no;
  	a[i]=no;
    res = res^no;
  }

  //res = a^b
  //finding position of first set bit
  int pos = 0;
  int temp = res;
  while((temp&1)!=1)
  {
  	pos++;
  	temp = temp>>1;
  }	
  int mask = 1<<pos;
  int x = 0; 
  int y = 0;
  for(int i = 0 ; i < n ; i++)
  {
    if((mask&a[i])>0)
     {
     	x = x^a[i];
     }	
  }
  y = res^x;
  cout<<min(x,y)<<" "<<max(x,y)<<endl;
  return 0;
}