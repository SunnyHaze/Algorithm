#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int w,x,h;
    cin >> w >> x >> h;
    bool cube[w][x][h];
    memset(cube,0,sizeof(cube)); //一定注意数组元素的初始化！！！！
    int n;
    cin >> n;
    while(n--){
        int x1,y1,z1,x2,y2,z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        x1-=1;
        y1-=1;
        z1-=1;
        x2-=1;
        y2-=1;
        z2-=1;
        for(int i = x1 ; i<= x2 ; i++){
            for(int j = y1 ; j <= y2 ; j++){
                for(int k = z1 ; k <= z2 ;k++){
                    cube[i][j][k] = 1;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0 ; i < w ; i++){
        for(int j = 0 ; j < x ; j++){
            for(int k = 0 ; k < h ; k++){
                if(!cube[i][j][k])
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}