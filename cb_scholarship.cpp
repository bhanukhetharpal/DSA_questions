#include<iostream>
using namespace std;

long int cb_scholarship( long int N, long int M, long int X, long int Y )
{ long int s = 0;
  long int e = N;
 long int mid;
 while ( s<=e )
 { if( mid<=N and mid>0)
   {
    if( (mid*X) <= (M + (N - mid)*Y ))
     { s = mid + 1 ; }  
     else
     { e = mid - 1 ; }

   }
  mid = (s+e)/2;
 } 
 
return mid; 

}
int main()
{ long int N,M,X,Y;
  cin>>N>>M>>X>>Y;
  cout<<cb_scholarship(N,M,X,Y);
  return 0;
}