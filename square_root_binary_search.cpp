#include<iostream>
using namespace std;
float square_root( int n , int P)
{   
	int s = 0;
	int e = n;

   float ans = -1.0;

   while( s <= e)
 {  float mid = (s+e)/2;
    if( (mid*mid) == n)
   	  { ans = mid;}


   	if ( (mid*mid) < n)
   		{ ans = mid;
   		 s = mid + 1; }

   	else
   	{ e = mid - 1; }
 }
   float inc=0.1;
  for(int time=1;time<=P;time++)
  { while(ans*ans<=n)
  	{
      ans = ans+inc;
    }
    //overshoot the value

  	ans=ans-inc;
  	inc=inc/10;
  }	
  return ans;
}
int main()
{ int n,p;
	cin>>n>>p;
 cout<<square_root(n,p);
 return 0;

}