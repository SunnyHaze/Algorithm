#include <iostream>
#include <cmath>
#define MAX(x,y) x>y ? x : y
#define MIN(x,y) x>y ? y : x
using namespace std;
void refraction(long long &a, long long &b){
    long long min;
    if(a > b)
        min = b;
    else
        min = a;
    for(long long i = min; i > 1 ; i--){
        while(a % i == 0 && b % i ==0){
            a /= i;
            b /= i;
        }
    }
}
int main(){
    long long a , b ,c;
    cin >> a >> b >> c;
    long long maxnum = MAX(MAX(a,b),c);
    long long minnum = MIN(MIN(a,b),c);
    refraction(maxnum,minnum);
    cout << minnum << "/" << maxnum;
    return 0;
}