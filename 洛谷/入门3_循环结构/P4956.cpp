#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int k = 1 ; k * (0+1+2+3+4+5+6)*52 <= n; k++){
        if((n - k * (0+1+2+3+4+5+6)*52 ) %(52*7) == 0 && (n - k * (0+1+2+3+4+5+6)*52 )/(52*7) <= 100){
            cout << (n - k * (0+1+2+3+4+5+6)*52 )/(52*7) << endl;
            cout << k;
            break;
        }
    }
}