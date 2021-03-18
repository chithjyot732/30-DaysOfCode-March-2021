#include<iostream>
#include<cmath>
using namespace std;
int prime(int);
int rev(int);
int main()
{
  int n,r;
  cout<<"Enter a number";
  cin>>n;
  r=rev(n);
  if((prime(n)==1)&&(prime(r)==1))
  cout<<"It is an emirp number";
  else
  cout<<"It is not an emirp number";
}
int rev(int n)
{
 int d,r=0;
 while(n>0)
 {
   d=n%10;
   r=(r*10)+d;
   n=n/10;
 }
 return r;
}
int prime(int v)
{
  int i,c=0;
  for(i=1;i<=v;i++)
  {
   if(v%i==0)
   c++;
  }
if(c==2)
return 1;
else
return 0;
}
