#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string doc;
    int n;
    cin >> n;
    cin >> doc;
    while(n--){
        int flag;
        cin >> flag;
        switch (flag)
        {
        case 1:
        {
            string temp;
            cin >> temp;
            doc += temp;
            cout << doc << endl;
        }
            break;
        case 2:
        {
            int a,b;
            cin >> a>> b;
            doc = doc.substr(a,b);
            cout << doc << endl;
        }
            break;
        case 3:
        {
            int a;
            string str;
            cin >> a >> str;
            doc.insert(a,str);
            cout << doc << endl;
        }
            break;
        case 4:
        {
            string str;
            cin >> str;
            if(doc.find(str) == string::npos){
                cout << -1 << endl;
            }
            else
                cout << doc.find(str) << endl;
        }
        default:
            break;
        }
    }
}