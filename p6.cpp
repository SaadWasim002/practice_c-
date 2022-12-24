#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int cur,c=0,en;
    for(int i=0;i<n;i++)
    {
        cur=i;
        for(int j=i;j<n;j++)
        {
            en=j;
            if(s==sum)
            {
                cout<<cur+1<<" "<<en;
                c=1;
                break;
            }
            else if(sum>s)
            {
                sum=0;
                break;
            }
            else
            {
                sum=sum+a[j];
            }
        }
        if(c==1)
            break;
    }
    return 0;
}