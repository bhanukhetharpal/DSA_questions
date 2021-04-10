#include<iostream>
using namespace std;
void spiral_print( int a[][100],int m,int n)
{  

    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

 while(startRow<=endRow and startCol<=endCol)
 {  //first row
 	for(int i=startCol;i<=endCol;i++)	
    {
    	cout<<a[startRow][i]<<" ";
    }
    startRow++;
    //endcol
    for(int i=startRow;i<=endRow;i++)
    {
    	cout<<a[i][endCol]<<" ";
    }
    endCol--;
    //end row
    if(endRow > startRow)
   { 
   	for(int i=endCol;i>=startCol;i--)
    {
    	cout<<a[endRow][i]<<" ";
    }
     endRow--;
   }
    //first col
    if(endCol>startCol)
   { 
   	for(int i=endRow;i>=startRow;i--)
    {
    	cout<<a[i][startCol]<<" ";
    }
    startCol++;
   }

 }
}

int main()
{
	int a[100][100]={0};
	int m,n;
  cout<<"enter the order of matrix(m*n) "<<endl;
  cin>>m>>n;

  cout<<"enter array elements"<<endl;


  for(int row=0;row<m;row++)
  { for(int col=0;col<n;col++)
  	{
  	cin>>a[row][col];
  	}
  }

    spiral_print(a,m,n);
    return 0;
 }