#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isprime(int n){
    if(n < 2)
        return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int l;
    cin >> l;
    long long sum = 0;
    int i = 2;
    int cnt = 0;
    do{
        if(isprime(i)){
            sum += i;
            cnt++;
            if(sum <= l)
                cout << i << endl;
        }
        i++;
    }while(sum <= l);
    cnt--;
    cout << cnt;
}