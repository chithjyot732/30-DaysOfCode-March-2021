#include<iostream>
using namespace std;

int min(int x,int y)
{
    return (x>y)?y:x;
}
int main()
{   
int n;
cout<<"Enter (even) number of elements: "<<endl;
cin>>n;
int nums[n];
int a,sum=0;
cout<<"Enter elements of array: "<<endl;
for(int i=0;i<n;i++)
  {
    cin>>nums[i];
  } 
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(nums[i]>nums[j])
		{
			a=nums[i];
			nums[i]=nums[j];
			nums[j]=a;
		}
	}

}
for(int i=0;i<n;i=i+2)
{
	sum=sum+min(nums[i],nums[i+1]);

}
cout<<"Maximum possible sum is "<<sum;
}
