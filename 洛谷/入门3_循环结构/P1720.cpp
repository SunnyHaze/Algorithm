#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n+1];
    a[0] = 0; a[1] = 1;a[2] = 1;
    for(int i = 3 ; i < n+1 ; i++){
        a[i] = a[i-1] + a[i-2];
    }
    double x = a[n];
    cout<< setiosflags(ios::fixed) <<setprecision(2) << x;
}