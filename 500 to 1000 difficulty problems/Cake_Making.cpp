#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int a,b;
    cin>>a>>b;
    int mini = min(a,b);
    cout<<(a*b)-mini;
    return 0;
}