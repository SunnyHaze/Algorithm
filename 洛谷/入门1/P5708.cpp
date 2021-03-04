#include<stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    scanf(" %lf%lf%lf",&a,&b,&c);
    double p = (a+b+c)/2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",S);
}