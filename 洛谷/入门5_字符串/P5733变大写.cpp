#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cin >> str;
    for(auto &i : str){
        if(i <= 'z' && i>= 'a' )
        i = i - 'a' + 'A';
    }
    cout << str;
}