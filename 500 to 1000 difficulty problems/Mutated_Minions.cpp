#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        v[i]+=k;
        if(v[i]%7==0)
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