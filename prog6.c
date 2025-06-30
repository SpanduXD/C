#include<stdio.h>
int main()
{
    int a,b,c,r,l;
    printf("Enter any 3nos");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?r=a:r=b;
    (r>c)?l=r:l=c;
    printf("Greatest among %d,%d and %d is %d",a,b,c,l);
}