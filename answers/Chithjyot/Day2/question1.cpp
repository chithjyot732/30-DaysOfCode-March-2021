#include<iostream>
#include<cmath>
using namespace std;

int length(int n){
int len=0;
while(n!=0){
  len= len+1;
  n=n/10;}
return len;}
int disarium(int n){
int sum=0,rem=0;
int L=length(n);
while(n>0){
  rem=n%10;
  sum=sum+pow(rem,L);
  n=n/10;
  L--;}
  return sum;
}
int main()
{
  int n,res=0;
  cout<<"Enter a number"<<endl;
  cin>>n;
  res=disarium(n);
  if(res==n)
  cout<<n<<" is a Disarium number";
  else
  cout<<n<<" is not a Disarium number";
}
