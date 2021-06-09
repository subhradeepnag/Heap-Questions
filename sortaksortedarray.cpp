#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6,5,3,2,8,10,9};
    int n = 7;
    int k = 3;
    priority_queue<int,vector<int>,greater<int>>p;
    int j = 0;
    for(int i=0;i<n;i++)
    {
        p.push(arr[i]);
        if(p.size()>k)
        {
            arr[j] = p.top();
            p.pop();
            ++j;
        }
    }

    while(p.size()>0)
    {
        arr[j] = p.top();
        p.pop();
        ++j;
    }

    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}