#include<iostream>
using namespace std;
int main()
{ int N;
  cin>>N;
  int nsp=N-1; //NO. OF SPACES
  if(N>10||N<0)
  { return 0; }
 
 
  //rows
  for( int i=0; i<N ; i++)
  {   //working for spaces
	  for( int csp=1; csp<=nsp; csp++)
     {
       cout<<"\t";
	 }  
	  //working for inc numbers 
	  int num=i+1;
	  for( int csi=0; csi<i+1; csi++)
	 { 
	   cout<<num<<"\t";
	   num++;
	 }
	 // working for rev numbers
	 for(int csi=0; csi<i; csi++)
	 {
		 cout<<num-2<<"\t";
		 num--;
	 }
	//working for spaces
	 for( int csp=1; csp<=nsp; csp++)
     {
       cout<<"\t";
	 }  
    nsp--;
    cout<<endl;
  }
	return 0;
}
