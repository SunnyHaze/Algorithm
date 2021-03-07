#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int flag = 0;
    int max = 0;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        if(i != 0 && a[i] == a[i-1] + 1){
            flag++;
        }
        else{
            if(flag > max){
                max = flag;
                flag = 0;
            }
        }
    }
    cout << max +1 ;
}