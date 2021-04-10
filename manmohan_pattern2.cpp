#include<iostream>
using namespace std;
int main()
{ int N;
  cin>>N;
 //constraints
 if(N>1000 || N<0)
 {return 0;}
  
 for( int i = 0; i< N; i++ ) 
{ for( int k =0; k<=i; k++)
  { if(i>1 and (k==0 || k==i))
    {
		cout<<i;
    }
	else if(i>1 and (k!=0 || k!=i))
	{ 
		cout<<0;
	}
	else if(i<=1)
	{
		 cout<<1;
		 
	}
   } 
   cout<<endl;
} 
return 0;
}