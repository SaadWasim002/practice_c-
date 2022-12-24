#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s,str1="";
    int a;
    cin>>s;
    sort(s.begin(),s.end());
    s.erase(0,(s.size()-1)/2);
    for(int i=0;i<s.size();i++)
    {
        str1=str1+s[i]+"+";
    }
    str1.erase(str1.size()-1);
    cout<<str1;
    return 0;
}