#include <iostream>
using namespace std;

int SumofDigits(int n)                    //function definition
{
    if(n==0){
        return 0;
    }
    else
        return n%10+ SumofDigits(n/10);   //recursion statement
}
int main()
{
    int n,sum;
    cout<<"Enter a number:\n";
    cin>>n;    
    sum=SumofDigits(n);                   //function calling
    cout<<"The sum of digits of "<<n<<" is "<<sum;
    return 0;
}
