#include<iostream>
#include<cstring>
int cube[100][100];
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int x = n / 2,y = 0;
    while(cnt != n*n){
        cube[x][y] = cnt+1;
        if(y == 0 && x != n-1){
            y = n-1;
            x++;
            cnt++;        
            continue;
        }
        if(y == 0 && x == n -1){
            y++;
            cnt++;
            continue;
        }
        if(y != 0 && x == n -1){
            x = 0;
            y--;       
            cnt++;     
            continue;
        }
        if(y != 0 && x != n -1){
            if(cube[x+1][y-1] != 0){
                y++;
            }else{
                x++;
                y--;
            }
            cnt++;
            continue;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            cout << cube[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}