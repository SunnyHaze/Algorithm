#include<iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    long long money = 0;
    int n = 1;
    int cnt = 0;
    for(int i = 1 ; i <= k ; i++){
        if(cnt == n){
            cnt = 1;
            n++;
            money+=n;
        }
        else{
            money += n;
            cnt++;
        }
    }
    cout << money;
}