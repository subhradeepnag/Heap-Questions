#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>v{{1,3},{-2,2},{5,8},{0,1}};
    int m = v.size();
    int n = v[0].size();
    int k = 2;
    priority_queue<pair<int,pair<int,int>>>maxh;
    for(int i=0;i<m;i++)
    {
        maxh.push({v[i][0]*v[i][0] + v[i][1]*v[i][1],{v[i][0],v[i][1]}});

        if(maxh.size()>2)
        {
            maxh.pop();
        }
    }
    while(maxh.size()>0)
    {
        pair<int,int>p = maxh.top().second;
        cout<<p.first<<" "<<p.second<<" "<<endl;
        maxh.pop();
    }

}