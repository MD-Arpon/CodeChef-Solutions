#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s,x,y,z;
    cin>>s>>x>>y>>z;

    if(x+y+z<=s) 
    {
        cout<<"0\n";
        return;
    }
    if((x+z<=s)||(y+z<=s)) 
    {
        cout<<"1\n";
        return;
    }
    if((x+z>s)||(y+z>s)) 
    {
        cout<<"2\n";
        return;
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