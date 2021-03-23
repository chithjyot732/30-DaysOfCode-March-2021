#include<iostream>
using namespace std;

int main() 
{
    int a,b,c,n,good_triplet=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    cout<<"Enter values of a,b and c"<<endl;
    cin>>a>>b>>c;
    for(int i=0;i<n;i++)
    {
        for(int j=(i+1);j<(n-1);j++)
        {
            if((arr[i]-arr[j])<=a);
            {
                for(int k=(j+1);j<(n-2);j++)
                {
                    if(((arr[j]-arr[k])<=b)&&((arr[i]-arr[k])<=c))
                    good_triplet++;
                }}}}
    cout<<"There are "<<good_triplet<<" good triplets.";
    return 0;
}
