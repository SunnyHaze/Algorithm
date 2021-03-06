#include<iostream>
using namespace std;
int main(){
    int side[3];
    for(auto &i : side){
        cin >> i;
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2-i ; j++){
            if(side[j] > side[j+1]){
                int temp = side[j];
                side[j] = side[j+1];
                side[j+1] = temp;
            }
        }
    }
    if(side[0]+ side[1] <= side[2]){
        cout << "Not triangle"<< endl;
    }
    else{
        int a =side[0]*side[0] + side[1] * side[1];
        int b = side[2] * side[2];
        if(a > b){
            cout << "Acute triangle" << endl;
        }else if(a == b){
            cout << "Right triangle" << endl;
        }else if(a < b){
            cout << "Obtuse triangle" << endl;
        }
        if(side[0] == side[1] || side[1] == side[2]){
            cout << "Isosceles triangle" << endl;
        }
        if(side[0] == side[1] && side[1] == side[2]){
            cout << "Equilateral triangle" << endl;
        }
        
    }
}