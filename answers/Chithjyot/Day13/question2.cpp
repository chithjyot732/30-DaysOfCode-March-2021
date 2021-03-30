#include <iostream>
using namespace std;

void check(int arr[],int n)
{
    int temp=0;
    for (int i=0;i<=n/2 && n!=0;i++)
    {
        if (arr[i]!=arr[n-i-1]){
            temp=1;
            break;
        }
    }
    if (temp==1)
        cout << "Array is not Palindrome";
    else
        cout << "Array is Palindrome";
}
int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    check(arr,n);
    return 0;
}
