#include<iostream>
using namespace std;
int main()
{int a[1000],n,left,right;
  cout<<"enter the no. of elements of array."<<endl;
  cin>>n;
  cout<<"enter array elements"<<endl;
  
  for(int i=0;i<n;i++)
 {cin>>a[i];
 }	
 cout<<"enter the sum you want:"<<endl;
 int cs=0,key;
 cin>>key;
 int j=sizeof(a)/sizeof(int);
 int i=0;
while(i<j)
{ cs=a[i]+a[j];
  if(cs>key)
  {j--;}
  else if(cs<key)
  {i++;}
  else if(cs==key)
  {cout<<a[i]<<" and "<<a[j];
   i++;
   j--;}	
}	

return 0;}