#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{5,6,7,8,9};
    int k = 3;
    int X = 7;

    priority_queue<pair<int,int>>maxh;
    for(int i=0;i<v.size();i++)
    {
        maxh.push({abs(v[i] - X),v[i]});

        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }

    while(maxh.size()>0)
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }

}