#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    bool flag = false;
    for(int i = 0;i<=n;i++)
    {
        if(i*x==y) 
        {
            flag = true;
            cout<<"YES\n";
            break;
        }
    }
    if(flag == false )
    {
        cout<<"NO\n";
    }
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