#include <cstring>
#include<iostream>
using namespace std;
int main(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    int cnt = 0;
    while(str.find("VK") != string::npos)
    {
        str.replace(str.find("VK"),2,"XX");
        cnt++;
    }
    if(str.find("VV") != string::npos || str.find("KK")!= string::npos){
        cnt++;
    }
    cout << cnt;
}