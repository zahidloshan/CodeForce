#include <iostream>
#include <string>
using namespace std;
int main()
{
    int stones,count=0;
    string colors;
    cin>>stones;
    cin>>colors;
    for(int i=0;i<colors.size();i++)
    {
        if(colors[i]==colors[i+1])
        {
            count++;
        }
    }
    cout <<count;
    return 0;

}
