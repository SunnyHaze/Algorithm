#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int temp;
    cin >> temp;
    int max = temp,min =temp;
    sum += temp;
    for(int i = 1 ; i < n ; i++){
        cin >> temp;
        if(temp > max)
            max = temp;
        if(temp < min)
            min = temp;
        sum += temp;
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << 1.0 * (sum-max-min)/(n-2);
}