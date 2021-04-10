#include<iostream>
using namespace std;
int main()
{ char ch;
  ch=cin.get();//this reads single character
  int x=0;
  int y=0;
  while(ch!='\n')
  { if(ch=='n'||ch=='N')
    {y++;}
    else if(ch=='s'||ch=='S')
    {y--;}
    else if(ch=='e'||ch=='E')
    {x++;}    	
    else if(ch=='W'||ch=='w')
    {x--;}
  ch=cin.get();
  }
  cout<<"final position: "<<endl; 
if(y>=0)
{ for(int i=1;i<=y;i++)
  {cout<<"N";}
 } 	
if(x>=0)
{for(int i=1;i<=x;i++)
  {cout<<"E";}
 }
 if(x<0)
 { x=abs(x);
 for(int i=1;i<=x;i++)
 {cout<<"W";}
}
 if(y<0)
 {y=abs(y);
  for(int i=1;i<=y;i++)
  {cout<<"S";} }

  cout<<endl; 

  cout<<"x: "<<x;
  cout<<"y: "<<y;
  return 0;
}