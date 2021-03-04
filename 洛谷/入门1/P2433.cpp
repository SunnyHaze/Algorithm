
#include<iostream>
#include<stdio.h>
#include<cmath>
// 填上你觉得需要的其他头文件
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << int(14/4) <<endl<< int(14/4)*4 <<endl<< 14-int(14/4)*4; 
        // 请自行完成问题 3 的代码
    } else if (T == 4) {
        printf("%.3lf",1.0*500/3);
        // 请自行完成问题 4 的代码
    } else if (T == 5) {
        cout << (260+220)/(12+20);
        // 请自行完成问题 5 的代码
    } else if (T == 6) {
        cout << sqrt(6*6+9*9);
        // 请自行完成问题 6 的代码
    } else if (T == 7) {
        int a = 100;
        cout << a+10 << endl;
        cout << a- 10 << endl;
        cout << a -a << endl;
        // 请自行完成问题 7 的代码
    } else if (T == 8) {
        double pi = 3.141593;
        double r = 5.0;
        cout << pi*2*r<< endl;
        cout << pi * r * r << endl;
        cout << pi *4 /3 * r*r*r << endl;
        // 请自行完成问题 8 的代码
    } else if (T == 9) {
        int day = 3;
        int num = 1;
        while(day){
            num+=1;
            num*=2;
            day--;
        }
        cout << num;
        // 请自行完成问题 9 的代码
    } else if (T == 10) {
        cout << 9;
        // 请自行完成问题 10 的代码
    } else if (T == 11) {
        cout << 1.0 * 100 / 3;
        // 请自行完成问题 11 的代码
    } else if (T == 12) {
        cout << 'm' - 'a' + 1 << endl;
        char a ='A' + 18 - 1 ;
        cout <<  a << endl;
        // 请自行完成问题 12 的代码
    } else if (T == 13) {
        double pi = 3.141593;
        double V = 4.0/3.0*(pi*4*4*4 + pi *10*10*10);
        cout << int(pow(V,1.0/3.0));
        // 请自行完成问题 13 的代码
    } else if (T == 14) {
        cout << 50;
        // 请自行完成问题 14 的代码
    }
    return 0;
}