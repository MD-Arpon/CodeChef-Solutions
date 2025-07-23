#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int c;
    cin>>n>>c;
    vector<int>v(n);
    
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        
    }
    int cc = c;
    
    sort(v.begin(),v.end());
    if(cc<v[0]) cc = v[0];
    
    for(int i = 0 ;i<n;i++)
    {
        if(cc == v[i]) cc++;
    }

    cout<<max((cc-c),0)<<endl;


    
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
