#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

int main()
{
 int n;
 cout<<"Enter number of kids"<<endl;
 cin>>n;
 int candies[n];
 int extraCandies;
 cout<<"Enter the number of candies each kid has: "<<endl;
 for(int i=0;i<n;i++)
 {
    cin>>candies[i];
 }
cout<<"Enter no of extra candies: "<<endl;
cin>>extraCandies;
int Max=INT_MIN;
 for(int i=0;i<n;i++)
 {
     Max=max(Max,candies[i]);
 }
 bool output[n];
 cout<<"[ ";
 for(int i=0;i<n;i++)
 {
     int res=candies[i]+extraCandies;
     if(res>=Max)
     {
         output[i]=true;
     }
     else
     {
         output[i]=false;
     }
     if(output[i]==1)
     cout<<"True ";
     else
     cout<<"False ";
 }
 cout<<" ]";
 return 0;
}
