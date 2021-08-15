#include <bits/stdc++.h>
using namespace std;
int TEST_CASES = 1;
int submain()
{
    int n;
    cin>>n;
    int arr[n],index,i,j,comparison=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 1 ; i < n;i++)
    {
        index = arr[i];
        j = i-1;
        while(index<arr[j]&&j>=0)
        {
            arr[j+1] = arr[j];
            j--;
            comparison++;
        }
        arr[j+1]=index;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int t=1;
    if(TEST_CASES)
        cin>>t;
    while(t--)
        submain();
}   