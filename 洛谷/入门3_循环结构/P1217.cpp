#include <iostream>
#include<cstring>
using namespace std;
bool isprime(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i * i <= n;i++){
        if(n%i == 0) return 0;
    }
    return 1;
}
int a[10] = {0};
int l,r;
void go(int x,int k){ // x是当前进行到的位数，k是总位数 a[0]是个位，倒序！
    if(x==(k+1)/2){ 
        for(int i = k-1 ; i >= x ; i--){
            a[i] = a[k - i - 1]; 
        }
        int shu = 0;
        for(int i = 0 ; i < k ; i++){
            shu = shu* 10 + a[i];
        }
        if(shu >= l && shu <= r && isprime(shu))
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
int tonum(string str){
    int l = str.length();
    int num = 0;
    for(int i = 0 ; i < l ; i++){
        num = num * 10 + str[i]-'0';
    }
    return num;
}
int main(){
    string sl,sr;
    cin >> sl >> sr;
    int x = sl.length();
    int y = sr.length();
    l = tonum(sl);
    r = tonum(sr);
    for(int i = x ; i <= y ; i++){
        go(0,i);
    }    
}