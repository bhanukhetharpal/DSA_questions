#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
string extractstringAtkey(string str, int key)
{
	char* s= strtok((char*)str.c_str()," ");// here we have converted string str to char array and it gives the first token
    
    while(key>1)
    {
    	s=strtok(NULL," ");
    	key--;
    }	

  return (string)s; //returning s as a string object by type casting

}
 
int converttoint( string str)
{   int ans =0;
	int p=1;
    for(int i= (str.length()-1) ; i>=0 ; i--)
    {
    	ans +=( (str[i]-'0') * p);
    	p=p*10;
    }	
    return ans; 
} 

bool numericcompare(pair<string,string> s1, pair<string,string> s2)
{
	string key1, key2 ;
	key1 = s1.second;
	key2 = s2.second;
	return converttoint(key1) < converttoint(key2);
}

bool lexicocompare(pair<string,string> s1, pair<string,string> s2)
{  
	string key1, key2 ;
	key1 = s1.second;
	key2 = s2.second;
	return key1 < key2;
}



int main()
{ 
  int key;
  string reversal,ordering;
  
  int n;
  cin>>n;
  cin.get();//to take \n

  string a[100];

  for(int i=0 ; i<n ; i++)
  {
  	getline(cin,a[i]);
  }	
  cin>>key>>reversal>>ordering;	
   
  pair<string,string> strPair[100];
  
  for(int i=0 ; i<n ; i++)
  { strPair[i].first=a[i];
  	strPair[i].second=extractstringAtkey(a[i],key);
  } 
  
  if(ordering=="numeric")
  {
  	sort(strPair, strPair+n , numericcompare);
  }

  else
  {
    sort(strPair, strPair+n , lexicocompare);
  }

  if(reversal=="true")
  {
  	for(int i=0 ; i< n/2 ; i++)
  	{
      swap(strPair[i] , strPair[n-i-1]);
  	}	
  }
//output

  for(int i=0 ; i<n ; i++)
  {
  	cout<<strPair[i].first<<endl;
  }	

 


return 0;
}