#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N, X, Y;
    cin >> N >> X >> Y;
    int cakesPerVehicle = Y / X;
    int vehicles = (N + cakesPerVehicle - 1) / cakesPerVehicle;
    cout << vehicles << endl;
    return 0;
}