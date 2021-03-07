#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool goal[34] = {0};
    for(int i = 0 ; i < 7 ; i++){
        int temp;
        cin >> temp;
        goal[temp] = 1;
    }
    int prize[8] = {0};
    while(n--){
        int cnt = 0;
        for(int i = 0 ; i < 7 ; i++){
            int ticket;
            cin >> ticket;
            if(goal[ticket])
                cnt++;
        }
        prize[7-cnt]++;
    }
    for(int i = 0 ; i < 7 ; i++){
        cout << prize[i] << " ";
    }
}