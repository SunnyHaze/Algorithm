#include<algorithm>
#include<stdio.h>
#include<cstring>
using namespace std;
char dic[30][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third"};//��Ӧ
int di[30]={0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
unsigned long long int a[10],top,flag;
int i,j;
char s[100];
int main()
{
     for(i=1;i<=6;i++)
     {
          scanf("%s",&s);//%s���������ո��ֹͣ
          for(j=1;j<=26;j++)
          {
               if(!strcmp(s,dic[j]))//strcmp(s1,s2);���������ͬ������0
               {
                    a[++top]=di[j];//������洢
                    break;//����ֹͣѰ��
               }
          }
      }
      sort(a+1,a+top+1);//̰�ģ�ʹԽС����Խ��ǰ���
      for(i=1;i<=top;i++)
      {
           if(flag)//������ǵ�һλ
           {
                printf("%.2d",a[i]);//���Ƹ�ʽ���
           }
           else
           {
                if(a[i])
                { 
                     printf("%d",a[i]);
                     flag=1;
                }
            }
     }
     if(!flag)printf("0");//����
     return 0;
}