#include<iostream>
using namespace std;
int main()
{ int a[1000],n,left,right;
  cout<<"enter the no. of elements of array."<<endl;
  cin>>n;
  cout<<"enter array elements"<<endl;
  int maxsum=0;
  int currentsum=0;
  for(int i=0;i<n;i++)
 {cin>>a[i];
 }	
 for(int i=0; i<n;i++) 	
{for(int j=i;j<n;j++) 
  {	currentsum=0;
    for(int k=i;k<=j;k++)
     {currentsum+=a[k];}
	 if(currentsum>maxsum)
	 { maxsum=currentsum;
	   left=i;
	   right=j;
	 }
  }	
}
cout<<"maximum subarray is:"<<endl;
for(int k=left;k<=right;k++)
	{cout<<a[k]<<",";}
cout<<endl<<"maxsum:"<<maxsum;




return 0;}