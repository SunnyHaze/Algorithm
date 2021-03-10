#include<iostream>
#include<cmath>
#define N 8
int a[N][N] = {0};
int cnt = 0;
using namespace std;
bool judge(int x,int y){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            if(a[i][j] == 1 && (i==x || j==y || abs(i-x) == abs(j-y) ) )
                return 0;
        }
    }
    return 1;
}
void go(int n){
    if(n == N){
        for(int  i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cnt++;
        return;
    }
    for(int i = 0 ; i < N ; i++){
        if(judge(n,i)){
            a[n][i] = 1;
            go(n+1);
            a[n][i] = 0;
        }
    }
}
int main(){
    go(0);
    cout<< cnt;
}