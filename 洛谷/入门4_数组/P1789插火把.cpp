#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n,m,k;
    cin >>n >> m >>k;
    bool block[n+4][n+4]; //矩阵上下左右各添加两列
    memset(block,0,sizeof(block));
    for(int j = 0 ; j < m ; j++){
        int x,y;
        cin >> x >> y;
        x += 1;
        y += 1;
        for(int i = y - 2 ; i <= y + 2 ; i++ ){
            block[x][i] = 1;
        }
        for(int i = x - 2 ; i <= x +2 ; i++){
            block[i][y] = 1;
        }
        for(int i = x - 1 ; i <= x + 1; i++){
            for(int k = y - 1 ; k <= y+1 ; k++){
                block[i][k] = 1;
            }
        }
    }
    while(k--){
        int x,y;
        cin >> x >> y;
        x+=1;y+=1;
        for(int i = x -2 ; i <= x + 2 ; i++){
            for(int j = y - 2 ; j <= y+2 ; j++){
                block[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 2 ; i < n + 2; i++){
        for(int j = 2 ; j < n+2 ; j++){
            if(!block[i][j])
                cnt++;
            // cout << block[i][j] << " ";
        }
        // cout << endl;    
    }
    cout << cnt;
}