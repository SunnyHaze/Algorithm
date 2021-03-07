#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
    string app = "apple";
    int n;
    cin >> n;
    if (n > 1)
        app.append("s");
    printf("Today, I ate %d %s.",n,app.c_str());
}