#include<iostream>
using namespace std;
int main()
{ int n,i;
  cout<<"enter the no. you want to check:"<<endl;
  cin>>n;
  for(i=2;i<n;i++)
  {if(n%i==0)
  	{cout<<n<<"is not prime."<<endl;
  	break;}
  }
  if(i==n)
  {cout<<n<<"is a prime."<<endl;}
  	return 0;
  }