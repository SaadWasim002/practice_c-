#include <iostream>
using namespace std;
int search(int arr[],int k,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        return i;
    }
    return -1;
}

int BinarySearch(int arr[],int k,int n)
{
    int s=0,mid;
    int e=n;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]>k)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
    
}
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     cout<<BinarySearch(arr,k,n);

// }
// int main()
// {
//     int a=10,b=20;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<b;
//     return 0;
// }
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<ar[i])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
            
        }
    }
    cout<<ar<<endl;
    return 0;
}