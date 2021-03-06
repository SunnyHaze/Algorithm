#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int min;
    cin >> min;
    for(int i = 0 ; i< n -1 ; i++){
        int temp;
        cin >> temp;
        if(temp < min)
            min = temp;
    }
    cout << min;    
}