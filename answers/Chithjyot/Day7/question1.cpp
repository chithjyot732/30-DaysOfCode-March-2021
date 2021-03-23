#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int nums[n],index[n];
    vector<int> target(n);
    cout << "Enter numbers for array: ";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    cout << "Enter index values: ";
    for(int i=0;i<n;i++)
    {
        cin >> index[i];
    }
    cout << endl;
    int s=n;
    int INDEX=0;
    while (s!= 0)
    {
        int i = index[INDEX];
        int n = nums[INDEX];
        target.insert(target.begin() + i, n);
        INDEX++;
        s--;
    }

    for (int i=0;i<n;i++)
    {
        if (i==0)
        {
            cout << "[" << target[i] << " , ";
        }
        else if (i == n-1)
        {
            cout << target[i] << "]";
        }
        else
        {
            cout << target[i] << " , ";
        }
    }
    return 0;
}
