#include "bits/stdc++.h"
using namespace std;

// int mai()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int ans,c=1;
//     int cur=a[0]; 
//     for(int i=0;i<n;i++)
//     {
//         cur=a[i];
//         ans=i+1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(cur==a[j])
//             {
//                 c=0;
//                 break;
//             }
//         }
//         if(c==0)
//             break;
//     }
//     cout<<ans;
//     return 0;
// }
// OR
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]] != -1)
        {
            minidx=min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }   
    }
    if(minidx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;
    }
    return 0;
}