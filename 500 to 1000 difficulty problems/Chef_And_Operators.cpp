#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    int b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<">\n";
    }
    if(a<b)
    {
        cout<<"<\n";
    }
    if(a==b)
    {
        cout<<"=\n";
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