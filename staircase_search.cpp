#include<iostream>
using namespace std;
int staircase_search( int a[100][100],  int n, int key)
{  if (n == 0)
        return -1;
   
    int smallest = a[0][0], largest = a[n - 1][n - 1];
    if (key < smallest || key > largest)
        return -1;

//set index for the right element

	int j = n-1, i = 0;

	while(i < n and j>=0)
	{	      
      
         if(a[i][j]==key)
          {
          	cout<<"key position is"<<endl;
		    cout<<i<<","<<j<<endl; 
		    return 1;
          }
         if(a[i][j]>key)
      	 {  
      	 	j--;
         }
        else //a[i][j]<key
         { 
          	i++;
          } 
     }
  
      cout<<"key not found"<<endl;	
      return 0;
}
int main()
{ int a[100][100];
  int n,key;
  cin>>n;
  for(int i=0 ; i<n ; i++)	
  { for(int j=0; j<n; j++)
  	{
  		cin>>a[i][j];
  	}
  }


  cout<<"enter element to be searched"<<endl;
  cin>>key;

staircase_search(a,n,key);

return 0;
}