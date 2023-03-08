#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1>>s2;
    //String Convert in uppercase to lowercase
    for (char& c : s1) {
        c = tolower(c);
    }
    //String Convert in uppercase to lowercase
    for (char& c : s2) {
        c = tolower(c);
    }

    if(s1==s2)
    {
        cout << "0";
    }
    else if(s1<s2)
    {
        cout << "-1";
    }

    else if(s1>s2)
    {
        cout <<"1";
    }

    return 0;
}
