#include<stdio.h>
void main(){
    int a=0,b=0,i=0;
    char c[50];
    printf("Enter the string\n");
    scanf("%s",&c);
    while(c[i]!='\0'){
        if(c[i]=='a'||c[i]=='e'||c[i]=='o'||c[i]=='i'||c[i]=='u')
        a++;
        else
        b++;
        i++;
    }
    printf("The no of consonants=%d",b);
    printf("The no of vowels=%d",a);
}