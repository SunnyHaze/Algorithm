
#include<iostream>
#include<stdio.h>
#include<cmath>
// �����������Ҫ������ͷ�ļ�
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // ճ������ 1 �����������룬���� return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // ճ������ 2 �����������룬���� return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << int(14/4) <<endl<< int(14/4)*4 <<endl<< 14-int(14/4)*4; 
        // ������������� 3 �Ĵ���
    } else if (T == 4) {
        printf("%.3lf",1.0*500/3);
        // ������������� 4 �Ĵ���
    } else if (T == 5) {
        cout << (260+220)/(12+20);
        // ������������� 5 �Ĵ���
    } else if (T == 6) {
        cout << sqrt(6*6+9*9);
        // ������������� 6 �Ĵ���
    } else if (T == 7) {
        int a = 100;
        cout << a+10 << endl;
        cout << a- 10 << endl;
        cout << a -a << endl;
        // ������������� 7 �Ĵ���
    } else if (T == 8) {
        double pi = 3.141593;
        double r = 5.0;
        cout << pi*2*r<< endl;
        cout << pi * r * r << endl;
        cout << pi *4 /3 * r*r*r << endl;
        // ������������� 8 �Ĵ���
    } else if (T == 9) {
        int day = 3;
        int num = 1;
        while(day){
            num+=1;
            num*=2;
            day--;
        }
        cout << num;
        // ������������� 9 �Ĵ���
    } else if (T == 10) {
        cout << 9;
        // ������������� 10 �Ĵ���
    } else if (T == 11) {
        cout << 1.0 * 100 / 3;
        // ������������� 11 �Ĵ���
    } else if (T == 12) {
        cout << 'm' - 'a' + 1 << endl;
        char a ='A' + 18 - 1 ;
        cout <<  a << endl;
        // ������������� 12 �Ĵ���
    } else if (T == 13) {
        double pi = 3.141593;
        double V = 4.0/3.0*(pi*4*4*4 + pi *10*10*10);
        cout << int(pow(V,1.0/3.0));
        // ������������� 13 �Ĵ���
    } else if (T == 14) {
        cout << 50;
        // ������������� 14 �Ĵ���
    }
    return 0;
}