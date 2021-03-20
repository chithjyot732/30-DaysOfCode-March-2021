#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  cout<<"Prime factors are ";
  for(int i=2;n>1;i++)
  {
     while(n%i==0)
     {
       cout<<i<<" ";
       n=n/i;
     }
  }
}
