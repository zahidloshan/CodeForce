#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        char s[101];
        cin >> s;
        int length =0;
        for(int i=0;s[i];i++)
        {
            length++;
        }

        if(length>10)
        { cout << s[0];
            int sCount=1;
            for(int j=1;j<length-1;j++)
            {
              sCount++;
            }
          cout << sCount-1;
          cout<<s[length-1]<<endl;

        }
        else
        {
            cout << s<<endl;
        }

    }
    return 0;
}

