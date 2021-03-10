#include<iostream>
#include <cstring>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cb = 0;
    int cg = 0;
    string word = "boy";
    for(int i = 0 ; i < word.size() ; i++){
        for(int j = word.size() - i ; j >= 1 ; j--){
            string key = word.substr(i,j);
            while(s.find(key) != string::npos){
                string temp;
                int n = key.size();
                for(int i = 0 ; i< n ; i++){
                    temp.append("X");
                }
                s.replace(s.find(key),n,temp);
                cb++;
            }
        }
    }
    word = "girl";
    for(int i = 0 ; i < word.size() ; i++){
        for(int j = word.size() - i ; j >= 1 ; j--){
            string key = word.substr(i,j);
            while(s.find(key) != string::npos){
                string temp;
                int n = key.size();
                for(int i = 0 ; i< n ; i++){
                    temp.append("X");
                }
                s.replace(s.find(key),n,temp);
                cg++;
            }
        }
    }
    cout << cb<< endl;
    cout << cg << endl;
}