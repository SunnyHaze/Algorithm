#include<iostream>
using namespace std;
int main(){
    int n; 
    cin >>n;
    for(int i = 2; i <= n ; i++){
        if(n % i == 0){
            cout << n / i;
            break;
        }
    }
}
//注意，这道题如果从“大头“开始遍历，会导致整个的题目有4个点TLE！（哪怕是每隔两个跳一个也会TLE）
//从小头开始遍历，有明显的降低复杂度的能力，因为质数在“小一些”的区间密度会更大。