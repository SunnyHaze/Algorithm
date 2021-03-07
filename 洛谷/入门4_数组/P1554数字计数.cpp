#include<iostream>
using namespace std;
int cnt[10] = {0};
void count(int n){
    while (n > 0)
    {
        int x = n % 10;
        cnt[x]++;
        n /= 10;
    }
}
int main(){
    int m,n;
    cin >> m >>n;
    for(int i = m ; i<= n; i++){
        count(i);
    }
    for(auto i: cnt){
        cout << i <<" "; 
    }
}