#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t;cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        for(int i = a;i>=0;i-=3)
        {
            a=i;
        }
        if(a==0) cout<<"NORMAL\n";
        if(a==1) cout<<"HUGE\n";
        if(a==2) cout<<"SMALL\n";

    }
    return 0;
}