#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() 
{
  string camel;
  int count=0;
  cout<<"Enter a CamelCase string:\nCamelCase string: A string with no spaces or punctuation"<<endl;
  getline(cin,camel);
  for(int i=0;camel[i]!='\0';i++)
  {  
      if(isupper(camel[i]))
      {   
          cout<<"\n"<<camel[i];
          count++;
      }
      else
      cout<<camel[i];
  }
  cout<<"\nTotal number of words: "<<count;
}
