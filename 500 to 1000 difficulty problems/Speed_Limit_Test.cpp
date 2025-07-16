#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double a,x,b,y; cin>>a>>x>>b>>y;
    if((a/x)>(b/y)) cout<<"Alice\n";
    if((a/x)<(b/y)) cout<<"Bob\n";
    if((a/x)==(b/y)) cout<<"Equal\n";
    
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