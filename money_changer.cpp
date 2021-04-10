#include<iostream>
#include<algorithm>
bool compare( int a , int b)
{
	return a<=b;
}
using namespace std;
int main()
{  int a[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(a)/sizeof(int);
    int money;
    cin>>money;
    while(money >0)
   { 	
    int lb= lower_bound( a , a+n , money , compare) - a -1 ;
    int m = a[lb] ; 
    money = money - m ;
    cout<<m<< " ";
   }


return 0;

}