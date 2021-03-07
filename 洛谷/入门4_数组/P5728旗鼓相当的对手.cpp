#include<iostream>
using namespace std;
struct stu{
    int chi;
    int mat;
    int eng;
};
void input(stu &obj){
    cin >> obj.chi;
    cin >> obj.mat;
    cin >> obj.eng;
}
bool judge(stu x, stu y){
    int dif_c = abs(x.chi - y.chi);
    int dif_m = abs(x.mat - y.mat);
    int dif_e = abs(x.eng - y.eng);
    int dif_sum = abs(x.chi+x.mat+x.eng - y.chi - y.eng - y.mat);
    if(dif_c <= 5 && dif_m <= 5 && dif_e <= 5 && dif_sum <= 10)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    cin >> n;
    stu mystu[n];
    for(int i = 0 ; i < n ; i++){
        input(mystu[i]);
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            cnt += judge(mystu[i],mystu[j]);
        }
    }
    cout << cnt;
}