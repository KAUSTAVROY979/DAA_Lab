#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int left=0,right = n-1;
    int val,found=0,mid=(right+left)/2;
    cin>>val;
    while(!found)
    {
        if(left==right)
        {
            if(arr[left]==val)
            {
                found = 1;
            }
            else
            {
                break;
            }
        }
        else if(val>arr[mid])
        {
            left = mid + 1;
        }
        else if(val<arr[mid])
        {
            right = mid -1;
        }
        else if(val == arr[mid])
        {
            found = 1;
        }
        mid = (right + left)/2;
    }
    int count = 1,index;
    index = mid;
    while(arr[index]==arr[index+1])
    {
        count++;
        index++;
    }
    index = mid;
    while(arr[index]==arr[index-1])
    {
        count++;
        index--;
    }
    cout<<val<<" - "<<count<<endl;
}