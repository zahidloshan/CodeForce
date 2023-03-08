#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int index=0,num=0,t,plusC=0;
    int values[101];
    for(char& c : s)
    {
        if(c=='1'||c=='2'||c=='3')
            {
             values[index++] = num * 10 + (c - '0');

            }
            else if(c=='+')
            {
               plusC++;
            }
            else
            {

                num = 0;
            }

    }
   //bubble sort
    for(int i=0;i<index;i++)
    {
        for(int j=0 ;j<index-1;j++)
        {
            if(values[j]>values[j+1])
            {
                t=values[j];
                values[j]=values[j+1];
                values[j+1]=t;
            }
        }
    }



    if(plusC>0)
    {
      cout <<values[0];
        for(int i=1;i<index;i++)
        {
            cout<<"+" <<values[i];
        }
    }
    else{
        cout << s<<endl;
    }


    return 0;
}
