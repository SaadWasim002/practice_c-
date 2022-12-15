#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
    string s,s1="";
    cin>>s;
    int l =s.size();
    for(int i=0;i<l;i++)
    {
        char c =tolower(s[i]);
        if(c=='a' || c=='e'|| c=='i'|| c=='o' || c=='u' || c=='y')
        {
            continue;
        }
        else
        cout<<"."<<c;
    }

    return 0;
}