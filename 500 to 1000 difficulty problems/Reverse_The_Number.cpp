#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n = stoi(s);
    cout<<n<<endl;
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