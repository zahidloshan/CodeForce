#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int length=0;

    string result;
    //Eliminate Duplicate character
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (s[j] == s[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += s[i];//+=: This is a concatenation operator that adds the value on the right-hand side to the existing value on the left-hand side of the operator. In this case, it adds the character at the current index of the string to the result string.
        }
    }

    //Count the length of result string
    for(int i=0;result[i];i++)
    {
        length++;
    }

    if(length%2==0)
    {
        cout << "CHAT WITH HER!" ;
    }
    else{
        cout << "IGNORE HIM!";

    }
    return 0;
}
