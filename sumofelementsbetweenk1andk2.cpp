#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int>v,int k)
{
    priority_queue<int>maxh;
    for(int i=0;i<v.size();i++)
    {
        maxh.push(v[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }

    return maxh.top();

}

int main()
{
    vector<int>v{1,13,12,5,15,11};
    int k1 = 3;
    int k2 = 6;
    int first = kthSmallest(v,k1);
    int second = kthSmallest(v,k2);
    //1,5,11,12,13,15
    //Sum of 12 and 13 = 25
    int sum = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>first && v[i]<second)
        {
            sum+=v[i];
        }
    }
    cout<<sum;//25

    return 0;
}