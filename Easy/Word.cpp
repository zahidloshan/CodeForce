#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            count++;
        }
        else{
            count--;
        }
    }
    if(count<=0)
    {
        for(int i=0;i<s.size();i++)
        {
           s[i]=tolower(s[i]);
        }

    }
    else if(count>=1)
    {
       for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}
