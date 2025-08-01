#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int div = n/5;
    int mod = n%5;

    int res = (div*4)+mod;
    cout<<res<<endl;
    
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