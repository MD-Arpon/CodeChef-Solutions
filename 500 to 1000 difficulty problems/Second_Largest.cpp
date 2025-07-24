#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int maxi = max(a,max(b,c));
    int mini = min(a,min(b,c));
    //cout<<maxi<<" "<<mini<<endl;
    if(a!= maxi && a!=mini) 
        cout<<a<<endl;
    else if (b!= maxi && b!=mini) 
        cout<<b<<endl;
    else if (c!= maxi && c!=mini) 
        cout<<c<<endl;

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