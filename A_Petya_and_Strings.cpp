#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a,b,sum1=0,sum2=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    // transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    // transform(s2.begin(),s2.end(),s2.begin(), ::toupper);
    for(int i=0; i<s1.length();i++)
    {
       a=s1[i];
       b=s2[i];
       sum1=sum1+a;
       sum2=sum2+b;
    }
    if(a<b)
    cout<<-1;
    else if(a>b)
    cout<<1;
    else
    cout<<0;
    return 0;
}