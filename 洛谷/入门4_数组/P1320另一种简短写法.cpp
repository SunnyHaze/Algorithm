#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char a,b = '0';
    int n = 0,ans[100001],zz = 1;
    while(cin >> a){
        n++;
        if(a == b)
            ans[zz]++;
        else
        {
            ans[++zz]++;
            b =a;
        }
    }
    cout << sqrt(n);
    for(int i = 1 ; i <= zz ; i++){
        cout << " " << ans[i];
    }
}