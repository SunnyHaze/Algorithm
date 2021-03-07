#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    bool a,b=0;
    a = !(x%2);
    if(x > 4 && x <= 12)
        b = !b;
    bool c1 = a&&b;
    bool c2 = a||b;
    bool c3 = (a&&!b)||(!a&&b);
    bool c4 = !a&&!b;
    cout << c1 << ' ' << c2 << " " << c3 << " "<< c4;
}