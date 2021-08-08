#include<bits/stdc++.h>
using namespace std;

void findKLargest(int arr[],int k)
{
    //minheap

    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=0;i<6;i++)
    {
        pq.push(arr[i]);

        while(pq.size() > k){

            pq.pop();
        }
    }

    while(pq.size() > 0){

        cout<<pq.top()<<" ";
        pq.pop();
    }


}

int main()
{
    int arr[]={7,10,4,3,20,15};
    int k = 3;
    findKLargest(arr,k);
}