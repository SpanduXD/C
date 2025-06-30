#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d*%d=%d",n,i,n*i);
    }
}