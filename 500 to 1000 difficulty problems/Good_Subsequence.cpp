#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int cntodd = 1;
    int store = v[0];
    for(int i = 0;i<v.size();i++)
    {
        if(store%2==0 && v[i]%2!=0) 
        {
            cntodd++;
            store = v[i];
        }
        if(store%2!=0 && v[i]%2==0) 
        {
            cntodd++;
            store = v[i];
        }
    }
    cout<<cntodd<<endl;
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