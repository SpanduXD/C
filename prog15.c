#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    char n[50];
    char id[10];
    float p;
    printf("Enter your name\n");
    scanf("%[^\n]s",&n);
    printf("Your name is %s\n",n);
    printf("Enter your id\n");
    scanf("%s",&id);
    printf("Your id is %s\n",id);
    printf("Enter 5 sub marks\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    printf("Percentage=%f",p);
}