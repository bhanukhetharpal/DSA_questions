#include<iostream>
using namespace std;
  
int a[1000][1000];
int main()
{cout<<" enter order of matrix (m*n)"<<endl;
int m,n;
cin>>m>>n;
cout<<"enter array elements:"<<endl;
for(int i=0;i<m;i++)
{for(int j=0;j<n;j++)
{
	cin>>a[i][j];
}
}
//wave print
for(int j=0;j<n;j++)
{if(j%2==0)
{ for(int i=0;i<m;i++)
cout<<a[i][j]<<" ";	
}	
else
for(int i=n-1;i>=0;i--)
{cout<<a[i][j]<<" ";}	
}






	return 0;
}
