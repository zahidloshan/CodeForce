#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10==0)//identify the last digit of number is zero or not
        {
            n=n/10;
        }
        else{
            n=n-1;
        }
    }
    cout << n<<endl;

    return 0;
}
