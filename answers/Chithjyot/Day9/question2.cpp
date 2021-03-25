#include <iostream>
using namespace std;

int main() 
{
    int n,max=0,sum=0;
    cout<<"Enter the size of array\n";
    cin>>n;
	int nums[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
       cin>>nums[i]; 
    }
    for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                max=0;
                for(int k=i;k<=j;k++)
                {
                    max=max+nums[k];
                }
                if(sum<max)
                sum=max;
            }
        }
    cout<<"\nLargest sum in the array: "<<sum;
    return 0;
}
