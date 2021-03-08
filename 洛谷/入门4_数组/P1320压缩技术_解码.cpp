#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<string> w;
    string str;
    while(cin >> str){
        w.push_back(str);
    }
    cout << w.size() << ' ';
    str.clear();
    for(auto i : w){
        str += i;
    }
    stack<bool> stk;
    bool now = 0;
    for(int i = 0 ; i <= str.length() ; i++){
        stk.push(str[i] - '0');
        if(now != str[i] - '0'){
            stk.pop();
            cout << stk.size() << " ";
            while (!stk.empty())
            {
                stk.pop();
            }
            stk.push(str[i] - '0');
            now = !now;
        }
    }
}