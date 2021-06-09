#include<stdio.h>

void Insert(int H[],int n)
{
    int i=n,temp;
    temp = H[i];

    while(i>1 && temp>H[i/2])
    {
        H[i]=H[i/2];
        i=i/2;
    }
    H[i] = temp;
}

int main()
{
    int H[]={0,10,20,30,25,5,40,35};

    //40,25,35,10,5,20,30

    for(int i=2;i<=7;i++)
    {
        Insert(H,i);
    }

    for(int i=1;i<=7;i++)
    {
        printf("%d",H[i]);
    }
    

    return 0;

}