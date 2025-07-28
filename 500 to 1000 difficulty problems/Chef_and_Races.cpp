#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if((x==a || x ==b) && (y==a || y==b))
        cout<<"0\n";
    else if((x==a || x ==b) && (y!=a || y!=b))
        cout<<"1\n";
    else if((x!=a || x !=b) && (y==a || y==b))
        cout<<"1\n";
    else if((x!=a || x !=b) && (y!=a || y!=b))
        cout<<"2\n";
}
int main ()
{

    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}