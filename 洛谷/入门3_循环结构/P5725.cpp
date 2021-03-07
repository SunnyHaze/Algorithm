#include<iostream>
using namespace std;
int num[2] = {0,1};
void add(){
    if(num[1] == 9){
        num[1] = 0;
        num[0]++;
    }
    else{
        num[1]++;
    }
}
void reset(){
    num[0] = 0;
    num[1] = 1;
}
void out(){
    cout << num[0] << num[1];
    add();
}
int main(){
    int n;
    cin >>n;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            out();  
        }
        cout << endl;
    }
    cout << endl;
    reset();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(n - i - 1 > j){
                cout << "  ";
            }
            else{
                out();
            }
        }
        cout << endl;
    }
    return 0;
}
