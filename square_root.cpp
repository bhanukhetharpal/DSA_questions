#include<iostream>
using namespace std;
int main()
{ cout<<"enter the no. you want to find square root of:"<<endl;
  int N,P;
  cin>>N;
  cout<<"enter the precision you want"<<endl;
  cin>>P;
  float ans=0;
  float inc=1.0;
  for(int time=0;time<=P;time++)
  {while(ans*ans<=N)
  	{
      ans=ans+inc;
    }
    //overshoot the value

  	ans=ans-inc;
  	inc=inc/10;
  }	
  cout<<"square root is:"<<ans;
  return 0;














}