#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        double numm = (double) num;
        double result = sqrt(numm);
        cout<<(int)result<<endl;
    }
    
    return 0;
}