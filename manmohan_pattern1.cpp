#include<iostream>
using namespace std;
int main() 
{int N;
 cin>>N;
 if(N<=0 || N>=1000)
 { return 0;}
 for(int i=0; i<N ; i++)
 { for(int k=0; k<=i ; k++)
   { //odd row
    if(((i+1)%2) !=0)
	{cout<<1;
	 continue;
	 }
	   
	//even row  

	 if((i+1)%2 == 0)
     { if(k==0 || k==i)
		  {
			  cout<<1;
		  }
	  if(k!=0 and k!=i)  
	  cout<<0;
	 }
	 
   }
   cout<<endl;
}
	return 0;
}