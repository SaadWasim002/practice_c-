#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pd = a[1]-a[0];
    int c=2;
    int ans=2;
    for(int i=2;i<n;i++)
    {
        if(pd==(a[i]-a[i-1]))
        {
            c++;
        }
        else{
            pd=a[i]-a[i-1];
            c=2;
        }
        ans=max(ans,c);
    }
    cout<<ans;
    return 0;
}