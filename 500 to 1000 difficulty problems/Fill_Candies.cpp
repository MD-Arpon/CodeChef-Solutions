#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,m;
    cin>>n>>k>>m;
    int Pocket_hold = k*m;
    
    int totalBag = n/Pocket_hold ;
    if(n%Pocket_hold!=0)
    {
        totalBag++;
    }
    cout<<totalBag<<endl;
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