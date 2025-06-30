#include<stdio.h>
void main(){
    char c;
    printf("Enter the desired character\n");
    getchar();
    scanf("%c",&c);
    int a=c;
    if(a>64 &&a<91||a>96&&a<123)
    {
    printf("This character is a alphabet");
    }
    else if(a>32&&a<47){
    printf("This character is a special character");
    }
}