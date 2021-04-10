#include<iostream>
#include<cstring>
#include<string>

using namespace std;

char *mystrtok(char* str , char delim) //returning pointer
{ static char *input=NULL;
  if(str!=NULL)
  {
  	input=str;
  }	

  if(input==NULL) //CHECK HERE BASE CASE after the final token has been returned
  	{
  		return NULL;
  	}

  //start extracting tokens and store them in an array
  char *output = new char[strlen(input)+1]; //dynamic array
  int i=0;
  for(  ; input[i]!='\0' ; i++)
  {
    if(input[i]!=delim)
    {
      output[i] = input[i];	
    }
    else
    {
    	output[i]= '\0';
    	input=input + i + 1;
    	return output;
    } 	
  }
  //corner case
  output[i]='\0';
  input=NULL;
  return output;
}

int main()
{ 
	char a[100];
	cin.getline(a,100);
	

  char *ptr= mystrtok(a,',');
  cout<<ptr<<endl;

  while(ptr!=NULL)
  {
  	ptr=mystrtok(NULL,' ');
  	cout<<ptr<<endl;
  }	


return 0;
}



