#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0,b=0;
    for(int i=0;i<n;i++)
    {
        b=c;
        for(int j=0;j<n;j++)
        {
            if(c==a[j])
            {
                c++;
                break;
            }
        }
        if(b==c)
        {
            cout<<c;
            break;
        }
    }
    return 0;
}