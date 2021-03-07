//±¾ÀýÒ²TLE£¡£¡£¡
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
bool isinvec(vector<int> v,int n){
    for(auto i : v){
        if(i == n)
            return 1;
    }
    return 0;
}
void delvec(vector<int> &v , int n){
    for(auto it = v.begin();it != v.end();it++){
        if(*it == n){
            v.erase(it);
            break;
        }
    }
}
int main(){
    vector<int> lighton;
    int n ;
    cin >> n;
    while(n--){
        double a;
        int t;
        cin >> a >> t;
        for(int i = 1 ; i <= t ; i++){
            int value =1.0* a * i;
            if(isinvec(lighton,value)){
                delvec(lighton,value);
            }
            else{
                lighton.push_back(value);
            }
        }
    }
    for(auto i: lighton){
        cout <<i <<" ";
    }
}