#include <bits/stdc++.h>
using namespace std;
int TEST_CASES = 1;
int submain()
{
    int n;
    cin>>n;
    int arr[n],val,count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>val;
    for (int i = 0; i < n; i++)
    {
        count++;
        if(arr[i]==val)
        {
            cout<<"Present "<<count<<endl;
            return 0;
        }
    }
    if(count == n)
    {
        cout<<"Not Present "<<count<<endl;
    }
    
}
int main()
{
    int t=1;
    if(TEST_CASES)
    {
        cin>>t;
    }
    while(t--)
    {
        submain();
    }
}