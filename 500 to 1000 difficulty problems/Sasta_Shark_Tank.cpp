#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t; cin>>t;
    for(int i = 0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        //cout<<a<<b<<endl;
        int a_valuation = a/0.1;
        int b_valuation = b/0.2;
        //cout<<a_valuation << " " << b_valuation <<endl;
        if(a_valuation>b_valuation)
        {
            cout<<"FIRST\n";
        }
        else if(a_valuation<b_valuation)
        {
            cout<<"SECOND\n";
        }
        else
        {
            cout<<"ANY\n";
        }
    }
    return 0;
}