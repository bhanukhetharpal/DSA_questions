#include<iostream>
using namespace std;
int sumofsubmatrices( int arr[][100] , int m, int n)
{  int sum=0;

  for(int i=0 ; i<m ; i++)
	{ for(int j=0 ; j<n ; j++)
		{ int tl=(i+1)*(j+1);
		  int br= (m-i)*(n-j);
		  sum+= arr[i][j] *	tl * br;

		}
	}
	return sum;

}

int  main()
{ int m,n;
int arr[100][100];
cin>>m>>n;
for( int i=0 ; i<m ; i++)
{ for(int j=0 ; j<n ; j++)
	{
		cin>>arr[i][j];
	}

}

cout<<sumofsubmatrices(arr,m,n);

return 0;

}