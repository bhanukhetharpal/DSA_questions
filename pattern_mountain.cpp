#include<iostream>
using namespace std;
int main()
{ int  n;
  cin>>n;

  if( n>10|| n<0)
 { return 0;}

int nsp;
nsp= (2*n)-3;
int nst=1; //initialising no. of numbers


 //ROWS
  for(int i=0 ; i < n ; i++)
  { //inc no.
  	  int num=1;
	  for( int cst=1; cst<=nst ; cst++)
      { 
		cout<<num<<"\t";
		 num++;
		  
	  } //SPACES
	 for(int csp=1 ; csp <= nsp; csp++ )
	  {  
		  cout<<"\t";
      }
      
        //rev no.
	 for( int cst = num-1; cst>0; cst--)
	  { if(cst!=n)
	 	{cout<<cst<<"\t";}
	  }
  
     nsp=nsp-2;
     nst++;
     cout<<endl;


  }
  
  

	return 0;
}