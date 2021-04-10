#include<iostream>
using namespace std;
bool ispossible( int R[] , int P , int L ,int mid)
{ 
  int cnt = 0;	//COUNT OF PARATHAS
  
	
	 for( int i = 0 ; i<L ; i++) //ALL COOKS MAKE PARATHA IN THE GIVEN TIME
     { int time = 0;
     	int a = 1;
     	while(time <= mid)
       { time = time + R[i]*a;
       	 cnt++;
       	 a++;
       }
       cnt--;
	 }	
	if(cnt >= P)
	{
		return true;
	}	
  return false;
}
int main()
{ int T,P,L;
 cin>>T;
 while(T--)
{   cin>>P; // no. of parathas
	
	cin>>L; //no. of cooks
	int R[50]; //rank of each cook from 1 to 8
	for(int i = 0; i < L ; i++) 
	{
		cin>>R[i];
	}
	for(int i = 0; i<L ; i++) 
	{ 
		if((R[i]>8) || (R[i]<1))
		{
			return -1;
		}	
	}	
	

	int s = 0;
	int time = 0;
	int a = 1;
    int max_rank =  R[0];
    int CNT = 0;
	for(int i = 1 ; i<=L ; i++ )
	{	 
	 max_rank = min(max_rank, R[i]);
    }
	while(CNT<P)
	{ time+= (a*max_rank);
		a++;
		CNT++;
	}
	
	int e = time ; 
	
    int ans;
	while( s<=e )
	{
		int mid = (s+e)/2;
		if(ispossible(R,P,L,mid))
		 { ans = mid;
		   e = mid - 1;
		 }
		 else
		 {s = mid + 1;} 
    }	
    cout<<ans<<endl;
}
return 0;
}