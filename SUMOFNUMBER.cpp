#include<iostream>

using namespace std;




int main()
{
	cout<<"enter the number:  ";
	int N,r,sum=0;
	cin>>N;
	while (N>0)
	{r=N%10;
		N=N/10;
		sum=sum+r;

	}

cout<<"\n";

cout<<"sum of the digits of number is: ";
cout<<sum;






return 0;
}