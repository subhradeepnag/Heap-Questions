#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{1,2,3,4,5};
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<v.size();i++)
    {
        minh.push(v[i]);
    }
    int cost = 0;
    while(minh.size()>=2)
    {
        int first = minh.top();
        minh.pop();
        int second = minh.top();
        minh.pop();
        cost = cost + first + second;
        minh.push(first + second);
    }
    cout<<cost;//33
}