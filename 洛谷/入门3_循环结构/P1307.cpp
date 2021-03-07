#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool isnegative = 0;
    if(str[0] == '-'){
        isnegative = 1;
        str.erase(0,1);
    }
    reverse(str.begin(),str.end());
    while(str[0] == '0' && str.length() > 1){
        str.erase(0,1);
    }
    if (isnegative){
        str.insert(0,1,'-');
    }
    cout << str;
}