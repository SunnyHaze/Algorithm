#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a[3];
    for(auto &i : a)
        cin >> i;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 1 ; j >= i ; j--){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(auto i: a){
        cout << i << " ";
    }
}