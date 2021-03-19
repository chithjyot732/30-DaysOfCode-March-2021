#include<iostream>
using namespace std;

int main()
{
 int n,d,digit,freq=0;
 cout<<"Enter the number to be checked"<<endl;
 cin>>n;
 for(d=0;d<=9;d++)
 {
   freq=0;
   for(int div=n;div>0;div/=10)
   {
     digit=div%10;
     if(digit==d)
     freq++;
   }
   if(freq>1)
   {
     cout<<"Entered number is not unique"<<endl;
     break;
   }
 }
 if(d==10)
 cout<<"Entered number is unique";
}
