#include<iostream>
using namespace std;

int prime(int num)
{
    for(int i=2;i<num/2+1;i++)
    {
        if(num%i==0){
        return 0;}
    }
    return 1;
}
int main()
{
    int n,num=2;
    cout<<"Enter number of rows\n";
    cin>>n;
    cout<<"The pattern is:\n";
    cout<<"* "<<endl;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int x=prime(num);
            if(x==1)
            cout<<"# ";
            else
            cout<<"* ";
            num=num+1;
        }
    cout<<endl;
    }
}
