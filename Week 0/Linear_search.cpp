#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i=0,val;
    int n1 = n;
    while (n--)
    {
        cin>>arr[i++];
    }
    cin>>val;
    for (int i = 0; i < n1; i++)
    {
        if(arr[i]==val)
        {
            cout<<"Found at index "<<i<<endl;
        }
    }
    if(i == n1)
    {
        cout<<"Not found"<<endl;
    }
    
}