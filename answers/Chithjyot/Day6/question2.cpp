#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j=j+2)
        {
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
        }
    }
    cout<<"Sum of odd-length arrays of given array is: "<<sum;
    return 0;
}
