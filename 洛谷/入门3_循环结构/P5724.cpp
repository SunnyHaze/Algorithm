#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int temp;
    cin >> temp;
    int max = temp,min = temp;
    for(int i = 1 ; i < n ; i++){
        cin >> temp;
        if(max < temp){
            max = temp;
        }
        if(min > temp){
            min = temp;
        }
    }
    cout << max -min;
}