#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7,10,4,3,20,15};
    int k = 3;
    priority_queue<int>maxh;
    for(int i=0;i<6;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }

    cout<<maxh.top();
}