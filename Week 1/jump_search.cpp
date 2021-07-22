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
    sort(arr,arr+n);
    int m = sqrt(n),left=0,right=left+m,found=0;
    while(arr[right]<=val&&right<n)
    {
        count++;
        left = right;
        right = right + m;
        if(right>n -1)
        {
            right = n;
        }
    }
    for(int i=left; i<right; i++)
    {
        count++;
        if(arr[i]==val)
        {
            cout<<"Present "<<count<<endl;
            return 0;
        }
    }
    cout<<"Not Present "<<count<<endl;
    return 0;

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