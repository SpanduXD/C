#include<stdio.h>
void main(){
    char  s1[]="Spandan";
    char s2[100];
    for(int i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
    }
    printf("The string is %s",s2);
}