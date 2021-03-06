#include<iostream>
using namespace std;
int num[2]={0,1};
void add(){
    if(num[1] == 9){
        num[1] = 0;
        num[0]++;
    }
    else{
        num[1]++;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = n - i ; j > 0 ; j--){
            cout << num[0] << num[1];
            add();
        }
        cout << endl;
    }
}