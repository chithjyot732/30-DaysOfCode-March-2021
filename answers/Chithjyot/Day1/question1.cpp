#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int res=((i*i*i)+(2*i));
        if(i<n)
        cout<<res<<",";
        else
        cout<<res;
    }
}
