#include <iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    int cnt = 1;
    while (a != 1)
    {
        cnt++;
        a /= 2;
    }
    cout << cnt;
}