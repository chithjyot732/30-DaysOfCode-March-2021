#include<iostream>
using namespace std;

int main()
{
  int n,term=0,sum=0;
  cout<<"Enter number of terms whose sum is required"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    term=(term*10)+i;
    if(i<n)
    cout<<term<<" + ";
    else
    cout<<term;
    sum=sum+term;
  }  
cout<<"\nSum of the series is "<<sum<<endl;
}
