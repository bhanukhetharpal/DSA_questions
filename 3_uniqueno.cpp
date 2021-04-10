#include<iostream>
using namespace std;
int main()
{ int n,no;
	cin>>n;
  int cnt[64]={0};
  for(int i = 0; i < n ; i++)
{ cin>>no;
  int j = 0;
  while(no>0) //we are putting bits of n in cnt and adding
  { int last_bit = (no&1);
  	 cnt[j] = last_bit;
  	no = no>>1;
  	j++;
  }
}
int ans=0;
int p=1;
for(int i = 0; i<64; i++)
{
	cnt[i] = cnt[i]%3;
	ans+=cnt[i]*p;
	p = p<<1;
}
cout<<ans<<endl;
return 0;
}