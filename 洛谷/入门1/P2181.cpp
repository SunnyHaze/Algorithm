#include<iostream>
using namespace std;
int main(){
    unsigned long long n;
    cin >> n;
    n = n*(n-1)/2 *(n-2)/3 *(n-3)/4;
    cout << n;
    return 0;
}