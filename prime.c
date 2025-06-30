#include<stdio.h>
void main(){
    int n,i,j=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        j=j+1;
    }
    if(j==0)
    printf("%d is a prime number",n);
    else
    printf("%d is a composite number",n);
}