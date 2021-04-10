#include<iostream>
using namespace std;
int main()
{ int N;
  cin>>N;
  int a,b,c;
  a=0; b=1;
  for(int i=0; i<N; i++)
  { for(int k=0; k<=i; k++)
    { if(i==0)
	  {cout<<a;
	   break;
      }
	  else if(i==1 and k==0)
	  { cout<<b<<" ";
	    continue;}
	  c=a+b;
      a=b;
	  b=c;
      cout<<c<<" ";
	  
	  
	  
	}
    cout<<endl;
  }

	
}