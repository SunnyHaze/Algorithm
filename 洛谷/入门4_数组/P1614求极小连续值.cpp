#include<iostream>
#include<deque>
using namespace std;
int sumq(deque<int> obj){
    int sum = 0;
    for(auto i:obj){
        sum += i;
    }
    return sum;
}
int main(){
    int n,k;
    cin >>n >>k;
    int a[n];
    for(int i = 0 ; i <n ; i++){
        cin >> a[i];
    }
    deque<int> q;
    for(int i = 0 ; i < k ; i++){
        q.push_back(a[i]);
    }
    int min = sumq(q);
    for(int i = k ; i < n  ; i++){
        q.push_back(a[i]);
        q.pop_front();
        if(min > sumq(q)){
            min = sumq(q);
        }
    }
    cout << min;
}