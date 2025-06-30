#include<stdio.h>
void main(){
    int a=65;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char)a;
            printf("%c",ch);
            a++;
        }
        printf("\n");
        a=65;
    }
}