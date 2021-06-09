#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{1,1,1,3,2,2,4};
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    priority_queue<pair<int,int>>maxh;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        maxh.push({i->second,i->first});
    }
    while(maxh.size()>0)
    {
        int freq = maxh.top().first;
        int ele = maxh.top().second;
        for(int i=0;i<freq;i++)
        {
            cout<<ele;
        }
        maxh.pop();
    }
    
}