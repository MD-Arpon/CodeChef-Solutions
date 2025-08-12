#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    int y;
    cin>>x>>y;
    if(y<=x)
    {
        int res = floor((x*1.0)/y);
        if(x%y==0)
        {
            cout<<res<<endl;
        }
        else 
        {
            cout<<res+(x-(y*res))<<endl;
        }
    }
    else
    {
        cout<<x<<endl;
    }
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