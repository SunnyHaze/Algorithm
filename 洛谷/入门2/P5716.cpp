#include <iostream>
using namespace std;
bool isspecial(int year){
    if(year % 400 == 0){
        return 1;
    }
    else if (year % 4 == 0 && year % 100 != 0){
        return 1;
    }
    else
        return 0;
}
int main(){
    int y,m;
    cin >> y >> m;
    int list_m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(isspecial(y)){
        list_m[2] = 29;
    }
    cout << list_m[m];
}