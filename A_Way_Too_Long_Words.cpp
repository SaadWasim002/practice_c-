#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,s1="";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s.size()>10)
        {
            s1.clear();
            s1=s1+s[0];
            s1= s1+(to_string(s.size()-2));
            s1=s1+s[s.size()-1];
            cout<<s1<<endl;
        }
        else
        cout<<s<<endl;
    }
    

    return 0;
}