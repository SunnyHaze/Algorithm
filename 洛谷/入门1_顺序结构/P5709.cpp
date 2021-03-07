#include<iostream>
using namespace std;
int main(){
    int m,t,s;
    cin >> m>>t>>s;
    if(!t) {cout << 0;}
    else{
        double N =m - s/t;
        cout << (N>0) * int(N);
    }
    return 0;
}