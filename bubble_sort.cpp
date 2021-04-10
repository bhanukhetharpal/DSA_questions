#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{for(int itr=0;itr<n-1;itr++)
 { for(int j=0;j<=n-1-itr;j++)
 	{if(a[j]>a[j+1])
     {swap(a[j],a[j+1]);}
    }
 }	
}
int main()
{int a[1000],n;
 cout<<"enter the no. of elements of array."<<endl;
 cin>>n;
 cout<<"enter array elements"<<endl;
 for(int i=0;i<n;i++)
 {cin>>a[i];
 }	
bubble_sort(a,n);
cout<<"array in ascending order is"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<" , ";
return 0;
}
