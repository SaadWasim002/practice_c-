#include <iostream>
using namespace std;

int main()
{
    int n,a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=i;j<n;j++)
        {
            s += a[j];
            cout<<s<<endl;
        }
    }
    return 0;
}