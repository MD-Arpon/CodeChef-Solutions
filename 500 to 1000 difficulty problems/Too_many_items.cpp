#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int res = n / 10;
    if(n%10==0) cout<<res<<endl;
    else cout<<res+1<<endl;
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