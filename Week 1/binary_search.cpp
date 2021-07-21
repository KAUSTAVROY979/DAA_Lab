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
    int left=0,right=n-1;
    int mid=(right-left)/2;
    int found =0;
    if(val<arr[0]||val>arr[n-1])
    {
        cout<<"Not Present "<<count<<endl;
        return 0;
    }
    while(!found)
    {
        count++;
        if(right-left == 1)
        {
            if(arr[left]==val)
            {
                cout<<"Present "<<count<<endl;
            }
            else if(arr[right]==val)
            {
                cout<<"Present "<<count<<endl;
            }
            else
            {
                cout<<"Not Present "<<count<<endl;
            }
            return 0;
        }
        mid = (right - left)/2;
        if(arr[mid]>val)
        {
            right = mid;
        }
        else if (arr[mid]<val)
        {
            left = mid;
        }
        else 
        {
            if(arr[mid]==val)
            {
                found = 1;
                cout<<"Present "<<count<<endl;
            }
        }
    }
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