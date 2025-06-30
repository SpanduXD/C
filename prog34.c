#include<stdio.h>
void main(){
    char a[50];
    int i=0,n=0,m;
    printf("Enter the length of string\n");
    scanf("%d",&m);
    printf("ENter the string\n");
    scanf("%s[^\n]",&a);
    for(i=0;i<=m;i++){
        if(a[i]=='\0')
        n+=1;
        else
        n+=0;
    }
    printf("Number of words=%d",n);
}