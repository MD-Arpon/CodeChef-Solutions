#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    int time = 0;
    for(int i = 0;i<x;i++)
    {
        if(i%3==0 && i > 1)
        {
            time+=z;
        }
        time+=y;
    }
    cout<<time<<endl;
}
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}