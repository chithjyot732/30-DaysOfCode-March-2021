#include<iostream>
using namespace std;

int main()
{
    int a=1,b=1,n=50;
    cout<<a<<" , "<<b<<" , ";
    for(int i=1;i<=n-2;i++)
    {
        int c=a+b;
        if(i==n-2)
        cout<<c;
        else
        cout<<c<<" , ";
        a=b;
        b=c;
    }
}
