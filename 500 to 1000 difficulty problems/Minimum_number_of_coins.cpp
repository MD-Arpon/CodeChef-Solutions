#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a%5==0 || a % 10 ==0)
        {
            int count = 0;
            count = a / 10;
            a%=10;
            count+=(a/5);
            cout<<count<<endl;

        }
        else 
        {
            cout<<"-1\n";
        }
    }
    return 0;
}