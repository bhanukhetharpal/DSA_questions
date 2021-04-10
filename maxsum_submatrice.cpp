#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxsumsubmatrice( int arr[][100] , int m , int n)
{ //col wise addn firstr
	for(int i = m-1 ; i>=0 ; i--)
	 { for( int j = n-2 ; j>=0 ; j--)
	 	{
	 		arr[i][j]+= arr[i][j+1];
	 	}

	 }
 //row wise addn 
   for(int j = n-1 ; j>=0 ; j--)	
   { for( int i = m-2 ; i>=0 ; i--)
   	 {
   	 	arr[i][j]+= arr[i+1][j];
   	 }

   }

   int result = INT_MIN;
   for( int i = 0 ; i<m ; i++)
   { for( int j=0; j<n ; j++)
   	{
   		result= max(result, arr[i][j]);
   	}
   }  
return result;
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
cout<<maxsumsubmatrice(arr,m,n);
return 0;
}
