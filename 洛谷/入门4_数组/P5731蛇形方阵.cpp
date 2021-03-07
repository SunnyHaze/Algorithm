#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    memset(a,0,sizeof(a));
    int x = 0 , y =0;
    int dir[4][2] = {
        {0,1},
        {1,0},
        {0,-1},
        {-1,0}
    };
    int d = 0;
    for(int i = 1 ; i <= n* n ; i++){
        a[x][y] = i;
        int x1 = x + dir[d][0];
        int y1 = y + dir[d][1];
        if(x1 >= n || x1 < 0 || y1 >= n || y1 < 0 || a[x1][y1] != 0){
            d++;
            d %=4;
        }
        x+=dir[d][0];
        y+=dir[d][1];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%3d",a[i][j]);
        }
        cout << endl;
    }
}