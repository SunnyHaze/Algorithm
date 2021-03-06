#include <iostream>
using namespace std;
bool isprime(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i * i <= n;i++){
        if(n%i == 0) return 0;
    }
    return 1;
}
int a[10] = {0};
void go(int x,int k){ // x是当前进行到的位数，k是总位数 a[0]是个位，倒序！
    if(x==(k+1)/2){ 
        for(int i = k-1 ; i >= x ; i--){
            a[i] = a[k - i - 1]; 
        }
        int shu = 0;
        for(int i = 0 ; i < k ; i++){
            shu = shu* 10 + a[i];
        }
        cout << shu << endl;
        return;
    }
    int i;
    if(x) i = 0;
    else i = 1;
    for(i = i ; i <= 9; i++){
        a[x] = i;
        go(x+1,k);
    }
}
int main(){
    go(0,3);
}
