#include<iostream>
#include<cstring>
using namespace std;
int n,tot = 0;
int col[12] = {0};
bool check(int c,int r){
    for(int i = 0 ; i< r ; i++){
        if(col[i] == c || abs(col[i] - c) == abs(i - r))
            return false;
    }
    return true;
}
void dfs(int r){
    if(r==n){
        tot++;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(col[i] == j)
                    cout << '1';
                else
                    cout << '0';
                cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        return ;
    }
    for(int c= 0 ; c< n; c++){
        if(check(c,r)){
            col[r] = c;
            dfs(r+1);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(col[i] == j)
                    cout << '1';
                else
                    cout << '0';
                cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        }
    }
}
int main(){
    int ans[12] = {0};
    for(n = 4 ; n <= 4 ; n++){
        memset(col,0,sizeof(col));{
            tot = 0;
            dfs(0);
            ans[n] = tot;
        }
    }
    while(cin >> n){
        if(n == 0)
            return 0;
        cout << ans[n] << endl;
    }
    return 0;
}