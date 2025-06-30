#include<stdio.h>
void main(){
    int i,f=1,n;
    printf("Enter the number of which factorial to be printed\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    f=f*i;}
    printf("Factorial of %d=%d",n,f);
}