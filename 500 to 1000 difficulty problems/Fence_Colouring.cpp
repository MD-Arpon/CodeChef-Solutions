#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int cnt1 = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            cnt1++;
            
        }
    }
    int fre[n+1] = {0};
    for(int i = 0;i<n;i++)
    {
        fre[v[i]]++;
    }
    int maxi = 0;
    for(int i = 0;i<n+1;i++)
    {
        if(fre[i]>maxi)
        {
            maxi = fre[i];
        }
    }
    if(cnt1>=maxi)
    {
        cout<<n-cnt1<<endl;
    }
    else
    {
        cout<<n-maxi+1<<endl;
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