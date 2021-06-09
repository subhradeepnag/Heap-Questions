#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi; 

void topelements(vector<int>arr,int n,int k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    priority_queue<pi,vector<pi>,greater<pi>>minh;
    for(auto i = mp.begin();i!=mp.end();i++)
    {
        minh.push({i->second,i->first});

        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    while(minh.size()>0)
    {
        cout<<minh.top().second<<" ";
        minh.pop();
    }
    
}

int main()
{
    vector<int>arr{1,1,1,3,2,2,4};
    int n = 7;
    int k = 2;
    topelements(arr,n,k);
}