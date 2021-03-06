#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    long long suma =0 ,sumb = 0;
    int cnta = 0, cntb = 0;
    for(int i = 1 ;i <= n ; i++){
        if(i % k == 0){
            suma += i;
            cnta++;
        }
        else{
            sumb += i;
            cntb++;
        }
    }
    cout <<setiosflags(ios::fixed) << setprecision(1) << 1.0 * suma / cnta << " " << 1.0 * sumb / cntb; 
}