#include <iostream>
using namespace std;
// int sort(int n,int arr[])
// {
//     for(int i=1;i<n;i++)
//     {
//         int cur=arr[i];
//         int j=i-1;
//         while(arr[j]>cur && j>=0)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=cur;
//     }
// }
int main()
{
    int n ,arr[n],mx;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mx=arr[0];
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    return 0;
}