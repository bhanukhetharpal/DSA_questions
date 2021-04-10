#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void rotate_image(int a[10][10] , int m)
{  //reverse each row
   for(int i=0;i<m;i++)
	{ int startcol = 0;
      int endcol = m-1;
      while(startcol<endcol)
     {swap(a[i][startcol],a[i][endcol]);
      startcol++;
      endcol--;
     }
    }

    //transpose matrix( swap all elements of upper triangle)
    for(int i=0; i<m; i++)
    { for(int j=0;j<m;j++)
       { if(i<j)
       	{ 
       		swap(a[i][j],a[j][i]);
       	}
       }   
    }	
}
void display(int a[10][10], int m)
{
	for(int i=0;i<m;i++)
    {for(int j=0;j<m;j++)
    	{
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl; 
    }
} 

void rot_stl(int a[][10], int m)
{
	//reverse each row
	for(int i=0;i<m;i++)
	{ for(int j=0;j<m;j++)
	  { 
	  	reverse(a[i],a[i]+m);
      }
    }
    //transpose matrix
   for(int i=0; i<m; i++)
    { for(int j=0;j<m;j++)
       { if(i<j)
       	 { 
       		swap(a[i][j],a[j][i]);
       	 }
       }   
    }	
 }	  

  	
int main()
{ int m;
	int a[10][10];
cin>>m;
for(int i=0;i<m;i++)
 { for(int j=0;j<m;j++)
  { 
  	cin>>a[i][j];
  }
 }
 rotate_image(a,m);
 display(a,m);

 return 0;
}