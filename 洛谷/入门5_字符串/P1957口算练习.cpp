#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int tonum(string str){
    int n = 0;
    for(auto i:str){
        n = n*10 + i - '0';
    }
    return n;
}
int main(){
    int n;
    cin >> n;
    char flag;
    while(n--){
        string input;
        char output[80];
        cin >> input;
        int a,b;
        if(isdigit(input[0])){
            a = tonum(input);
            cin >> b;
        }else{
            flag = input[0];
            cin >> a >> b;
        }
        switch (flag)
        {
        case 'a':
            sprintf(output,"%d+%d=%d",a,b,a+b);
            break;
        case 'b':
            sprintf(output,"%d-%d=%d",a,b,a-b);
            break;
        case 'c':
            sprintf(output,"%d*%d=%d",a,b,a*b);
            break;
        default:
            break;
        }
        cout << output << endl << strlen(output) << endl;
    }
}