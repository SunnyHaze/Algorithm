#include <iostream>
using namespace std;
int main(){
    int num[3];
    for(auto &i : num){
        cin >> i;
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 - i ; j++){
            if(num[j] > num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    char str[4];
    cin >> str;
    for(int i = 0 ; i < 3 ; i++){
        cout << num[str[i]-'A'] <<" ";
    }
}