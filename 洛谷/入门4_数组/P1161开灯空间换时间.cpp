//ÀûÓÃ¹şÏ£·¨
#include<iostream>
using namespace std;
bool light[2000001];
int main(){
    int n;
    cin >>n;
    while(n--){
        double a;
        int t;
        cin >> a >> t;
        for(int i = 1; i <= t ; i++){
            int value = a * i;
            light[value] = !light[value];
        }
    }
    for(int i = 0 ; i < 2000001 ; i++){
        if(light[i]){
            cout << i;
            break;
        }
    }
}