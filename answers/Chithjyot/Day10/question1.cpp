#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() 
{
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin,str);
    int freq[26]={0};
    int index;
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]!=' ')
        {
            char lower= tolower(str[i]);
            index=lower-'a';
            freq[index]= freq[index]+1;
        }
    }
    int temp=1;
    for(int i=0; i<26;i++)
    {
        if(freq[i]==0)
          temp=0;
    }
    if(temp==1)
    cout<<"Pangram exists";
    else
    cout<<"Pangram doesn't exist";
    return 0;
}
