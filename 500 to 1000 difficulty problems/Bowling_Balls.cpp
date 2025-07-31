#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int x;
    int y;
    cin>>n>>x>>y;
    int a[n];
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=x && a[i]<=y)
            cnt++;
    }
    cout<<cnt<<endl;
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