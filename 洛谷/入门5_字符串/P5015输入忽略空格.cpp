#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[5];
    int len = 0;
    while(cin >> a)
        len += strlen(a);
    cout << len;
}