#include<iostream>
using namespace std;

int main()
{   
  int n;
  cout<<"Enter size of number array:"<<endl;
  cin>>n;
  int nums[n],target;
  cout<<"Enter elements of number array:"<<endl;
  for(int i=0;i<n;i++)
  {
	  cin>>nums[i];
  }
  cout<<"Enter target value:"<<endl;
  cin>>target;
  cout<<"Indices of the 2 numbers that add up to target are: ";
  for(int i=0;i<n;i++)
  {
	  for(int j=i+1;j<n;j++)
    {
      if(nums[i]+nums[j]==target)
      {
        cout<<"[ "<<i<<","<<j<<" ]"<<endl;
		  }
    }
  }
return 0;
}
