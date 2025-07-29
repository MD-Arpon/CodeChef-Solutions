#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum<=x) 
        cout<<"1\n";
    else
    {
        cout<<ceil((sum*1.0)/x)<<endl;
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