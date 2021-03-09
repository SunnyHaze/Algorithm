#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin >> s;
    char a[3] = {'0','0','0'};
    while(s.find(";")!= string::npos){
        string work = s.substr(0,s.find(";")+1);
        s.erase(0,s.find(";")+1);
        if(isdigit(work[3])){
            a[work[0]-'a'] = work[3];
        }
        else{
            a[work[0] - 'a'] = a[work[3] - 'a'];
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        cout << a[i] << " ";
    }
}