#include<iostream>
using namespace std;
int main()
{ int m,n;
  int arr[100][100];
  cin>>m>>n;
  for( int i=1 ; i<=m ; ++i)
  { for(int j=1 ; j<=n ; ++j)
	{
		cin>>arr[i][j];
	}
  }
 

int tli, tlj , bri , brj;
cin>>tli>>tlj>>bri>>brj;

int sum=0;

	int pf[100][100];
	for(int i = 1 ; i<=m; ++i)
	 { for( int j = 1 ; j<=n ; ++j)
	 	{
	 		pf[i][j] = arr[i][j] + pf[i][j-1] + pf[i-1][j] - pf[i-1][j-1];
	 	}
     }
 


  
  	sum+=pf[bri][brj] - pf[tli-1][brj] - pf[bri][tlj-1] + pf[tli-1][tlj-1];

  
  cout<<sum;





return 0;
}


