#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if(x>2*y || y > 2*x)
    {
        cout<<"0\n";
    }
    else
    {
        int mini = min(x,y);
        int maxi = max(x,y);
        cout<<mini-(maxi/2)<<endl;
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