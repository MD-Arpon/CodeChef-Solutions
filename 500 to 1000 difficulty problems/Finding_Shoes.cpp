#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(m>n)
    {
        m = n;
    }
    int total = n*2;
    int required = total - m;
    cout<<required<<endl;
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