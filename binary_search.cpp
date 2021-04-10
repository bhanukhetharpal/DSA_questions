#include<iostream>
using namespace std;
int binary_search(int a[1000] ; int n;int key)
{ int s=0;
  int e=n-1;
  int mid=(s+e)/2;
  while(s<=e)
  { if(a[mid]==key)
  	{return key;}
  	else if(a[mid]<key)
  	{e=mid-1;
  	 return key;}
  else if(a[mid]>key)
  	{s=mid+1;
  		return key;}
  }
  return -1;
}
int main()
{ cout<<"enter no. of array elements"<<endl;
 int n,a[1000];
 cin>>n;
 cout<<"enter array in ascending order"<<endl;
 for(int i=0;i<n;i++)
 {cin>>a[i];
 }
 int key;
 cout<<"enter the element you want to search"<<endl;
 cin>>key;
 int pos=binary_search(a[];n;key);
 if(pos!=-1)
 {cout<<"the element you searched for is at"<<pos;}
else
	cout<<"the element you searched for is not present."<<endl;
return 0;
}