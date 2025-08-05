#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    long long int sum = 1;
    for(int i = n;i>=1;i--)
    {
        sum*=i;
    }
    cout<<sum<<endl;
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