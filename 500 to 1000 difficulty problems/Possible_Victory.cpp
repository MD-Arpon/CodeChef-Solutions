#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int r,o,c;
    cin>>r>>o>>c;
    int need = r - c;
    int left = (20-o) * 6;
    int run = left * 6;
    if(run>need) 
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}