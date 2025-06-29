#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,n; cin>>x>>n;
    int total = n/100;
    int req = total - x;
    if (n%100!=0) req+=1;

    
    (req >=0) ? cout<<req<<endl:cout<<"0\n";
    
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