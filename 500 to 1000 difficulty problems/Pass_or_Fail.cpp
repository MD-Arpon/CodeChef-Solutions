#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,p;
    cin>>n>>x>>p;
    int correct_marks = x*3;
    int incorrect_marks = n-x;
    int total = correct_marks - incorrect_marks;
    (total>=p)? cout<<"PASS\n":cout<<"FAIL\n";
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