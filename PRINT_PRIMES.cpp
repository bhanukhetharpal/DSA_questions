#include<iostream>
using namespace std;
bool isprime(int n)
{{for(int i=2;i<=n-1;i++)
  if(n%i==0)
  return false;
 }
 return true;
}
void printprime(int n)
{for(int i=2;i<=n;i++)
 {if(isprime(i)==true)
  {cout<<i<<" ";}	
  }
}
int main()
{ int n;
  cout<<"enter number"<<endl;
  cin>>n;
  printprime(n);	
return 0;

}
