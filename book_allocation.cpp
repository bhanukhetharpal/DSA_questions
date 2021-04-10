#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispossible( int arr[], int n , int m , int min_pages)
{ int student = 1;
  int pages_assigned = 0;
  for( int i = 0; i<n ; i++)
  {  if( pages_assigned + arr[i] > min_pages)
  	{   student++;
  		pages_assigned = arr[i];

  	}

  	else
  	{
       pages_assigned+=arr[i];
  	}
  	if(student>m)
  	{
  		return false;
  	}

  }	
  return true;

}
int min_pages_assigned( int arr[] , int n , int m)
{ int s = arr[n-1];
	int sum = 0;
	int ans = INT_MAX;
	if(n<m)
		{return -1;}
   for( int i = 0; i<n ; i++)
   {
   	sum+=arr[i];
   }	
   int e = sum;
   while(s<=e)
   {
   	 int mid = (s+e)/2;
   	 if(ispossible(arr, n, m, mid))
   	 { 
   	 	ans = min(ans,mid);
   	 	e = mid -1;
   	 }	
   	 else {
   	 	s = mid + 1;
   	 }
   }
   return ans;	

}
int main()
{   int t;
	cin>>t;
	while(t--)
  {		
	int n , m; //n= no. of books and m= no. of students
	cin>>n>>m;
  int *arr = new int [10000];
  for( int i = 0; i< n ; i++)
  {
  	cin>>arr[i];
  }	

  cout<<min_pages_assigned(arr , n , m)<<endl;
}

  return 0;
}