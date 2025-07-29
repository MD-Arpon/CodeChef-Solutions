#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,r;
    cin>>x>>y>>r;
    int total = x+(r/30);
    cout<<ceil((total*1.0)/y)<<endl;
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