#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a;
    int b;
    cin>>a>>b;
    int c = 21-a-b;
    (c>10)? cout<<"-1\n" : cout<<c<<endl;
}
int main ()
{

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}