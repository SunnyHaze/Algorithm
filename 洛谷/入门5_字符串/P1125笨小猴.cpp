#include<iostream>
#include <map>
#include<string>
using namespace std;
bool isprime(int n){
    if(n < 2)
        return 0;
    else{
        for(int i = 2 ; i * i<= n ; i++){
            if(n%i == 0)
                return 0;
        }
    }
    return 1;
}
int main(){
    map<char,int> m;
    string s;
    cin >> s;
    for(auto i : s){
        if(m.find(i)==m.end()){
            m[i]=1;
        }
        else{
            m[i]++;
        }
        for(auto j : m){
        }
    }
    int max = m.begin()->second;
    int min = max;
    for(auto i : m){
        if(i.second > max)
            max = i.second;
        if(i.second < min)
            min = i.second;
    }
    if(isprime(max-min)){
        cout << "Lucky Word" << endl;
        cout << max - min;
    }
    else{
        cout << "No Answer" << endl;
        cout << 0;
    }
 
}