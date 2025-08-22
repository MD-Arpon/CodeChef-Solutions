#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h,x,y;
    cin>>h>>x>>y;
    h-=y;
    int res = ceil(h * 1.0 / x);
    cout<<res+1<<endl;
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