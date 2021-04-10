/*code to print the following pattern
         1
        232
       34543
      4567654 
    */   
#include<iostream>
using namespace std;
int main()
{ int n;
  cout<<"enter no. of rows:"<<endl;
  cin>>n;
//rows
  for(int i=1;i<=n;i++)
  { //space
  	for(int space=1;space<=n-i;space++)
     {cout<<" ";}	
    //increasing no.
   int val=i;
  	for(int cnt=1;cnt<=i;cnt++)
  	{cout<<val;
  	 val++;	
     }
     //decreasing no.
     val=val-2;
     for(int o=1;o<=i-1;o++)
     {cout<<val;
      val--;
      }
      //print a new line
      cout<<endl; 	
  }
  return 0;
}