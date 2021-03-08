#include<iostream>
void turn1(char(*p)[],int n){

}
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n][n];
    for(auto &i : a){
        for(auto &j:i){
            cin >> j;
        }
    }
    turn1(a,n);
    for(auto &i : a){
        for(auto &j:i){
            cout << j << " ";
        }
    }
    

}
