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
//ע�⣬���������ӡ���ͷ����ʼ�������ᵼ����������Ŀ��4����TLE����������ÿ��������һ��Ҳ��TLE��
//��Сͷ��ʼ�����������ԵĽ��͸��Ӷȵ���������Ϊ�����ڡ�СһЩ���������ܶȻ����