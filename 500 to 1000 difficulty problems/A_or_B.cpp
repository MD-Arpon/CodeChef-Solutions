#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if((2*x) + (4*(x+y)) <(4*y) + (2*(x+y)))
        cout<<(1500-((2*x) + (4*(x+y))))<<endl;
    else
        cout<<(1500-((4*y) + (2*(x+y))))<<endl;
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