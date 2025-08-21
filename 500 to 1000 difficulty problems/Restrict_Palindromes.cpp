#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    for(int i = 0;i<n;)
    {
        s.push_back('a');
        i++;
        if(i<=n-1)
        {
            s.push_back('b');
            i++;
        }
        if(i<=n-1)
        {
            s.push_back('c');
            i++;
        }
    }
    cout<<s<<endl;
   
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