#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int maxidx = 0;
    int maxi = -1000;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>maxi)
        {
            maxi = v[i];
            maxidx = i;
        }
    }
    cout<<maxidx+1<<endl;
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