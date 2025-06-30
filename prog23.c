#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter a no\n");
    scanf("%d",&n);
    while(n>=1){
        sum+=(n%10);
        n=n/10;
    }
    printf("The sum of individual digits=%d",sum);
}