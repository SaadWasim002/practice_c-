#include <iostream>
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
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int mx=a[0];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]>mx && a[i]>a[i+1])
        {
            mx=a[i];
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
