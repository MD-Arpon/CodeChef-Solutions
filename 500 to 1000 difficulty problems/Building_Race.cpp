#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    double cnta = (double) a/ (double)x;
    double cntb = (double)b/(double)y;

    if(cnta<cntb) cout<<"Chef\n";
    if(cnta>cntb) cout<<"Chefina\n";
    if(cnta==cntb) cout<<"Both\n";
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