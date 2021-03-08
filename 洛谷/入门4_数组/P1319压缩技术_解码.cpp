#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    bool a[n*n];
    int pos = 0;
    bool flag = 0;
    while(cin >>k){
        for(int i = pos ; i < pos +k ; i++){
            a[i] = flag;
            // cout << flag << " ";
        }
        flag = !flag;
        pos = pos+k;
    }
    bool ans[n][n];
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j++){
            cout << a[n*i + j];
        }
        cout << endl;
    }

}
