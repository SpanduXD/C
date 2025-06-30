#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter 2 nos");
    scanf("%d%d",&a,&b);
    (a>b)?r=a:r=b;
    printf("The greatest number among %d and %d is %d",a,b,r);
    return 0;
}