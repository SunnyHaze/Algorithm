#include<iostream>
using namespace std;
int v[3] = {0};
int s[3];
int cnt[100] = {0};
void go(int x){ //x是当前位数
    if(x == 3){
        int sum = 0;
        for(auto i : v){
            sum += i;
        }
        cnt[sum]++;
    }
    else{
        for(int i = 1 ; i <= s[x] ; i++){
            v[x] = i;
            go(x+1);
        }
    }
}
int main(){
    for(auto &i:s){
        cin >> i;
    }
    go(0);
    int max = 0;
    int pmax = 0;
    for(int i = 0 ; i < 100 ; i++){
        if(cnt[i] > max)
        {
            max = cnt[i];
            pmax = i;
        }

    }
    cout << pmax;
}