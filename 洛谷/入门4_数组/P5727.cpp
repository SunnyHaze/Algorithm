#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> array;
    int n;
    cin >>n;
    array.push_back(n);
    while(n!=1){
        if(n%2 == 0){
            n/=2;
        }
        else{
            n=n*3+1;
        }
        array.push_back(n);
    }
    reverse(array.begin(),array.end());
    for(auto i : array){
        cout << i << " ";
    }
}