#include<stdio.h>
void main(){
    int i,n1,n2,n3;
    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=8;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}