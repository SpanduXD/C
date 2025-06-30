#include<stdio.h>
void main(){
    int n=0,i=0,j,k;
    char a[50];
    char* p[50];
    printf("Enter a string\n");
    scanf("%s",&a);
    printf("reversed string:-");
    while(a[i]!=0)
    {
        n++;
        i++;
    }
    for(i=n-1,k=0;i>=0,k<n;i--,k++){
        p[k]=&a[i];
    }
    for(j=0;j<n;j++){
        printf("%c",*p[j]);
    }
}