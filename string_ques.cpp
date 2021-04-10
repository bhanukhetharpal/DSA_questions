#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string funnyString(string s) {

string r = s;
  reverse(r.begin() , r.end());
  cout<<r<<endl;
  int size = s.length();
  int a1[10000];
  int a2[10000];
  for(int i = 0 ; i<size ; i++)
  { a1[i] = int(s[i]);
    a2[i] = int(r[i]);
  }
  cout<<endl;
  int d1[10000];
  int d2[10000];
  for(int i = 0 ; i<size-1 ; i++)
   { 
   	 d1[i] = abs(a1[i+1] - a1[i]);
     d2[i] = abs(a2[i+1] - a2[i]);
   } 
 
  int cnt = 0;
  int i = 0; 
  int j = size - 2 ;
  while(i<=size-2)
  { if(d1[i] == d2[i])
    {cnt++;}
    i++;
  }
    
  if(cnt == (size - 1))
  {return "Funny";}
  else
  {return "Not Funny";}
 
}

int main()
{
	string s;
	getline(cin,s);
	
	string result = funnyString(s);
	cout<<result;
	return 0;
}