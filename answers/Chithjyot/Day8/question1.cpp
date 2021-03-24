#include <iostream>
using namespace std;

int main()
{   
    int i,j,count,sum=0,nums[5];
    cout<<"Enter the elements of array:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>nums[i];
    }
    cout<<"Unique elements of array:\n";
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;j<5;j++)
        {
         if(nums[i]==nums[j])
         count++;   
        }
     if(count==1)
      {
        cout<<nums[i]<<" ";
        sum=sum+nums[i];
      }
    }
    cout<<"\nSum is "<<sum;
return 0;
}
