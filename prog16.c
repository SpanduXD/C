#include<stdio.h>
void main(){
    char t;
    float f,c;
    printf("Enter F to convert fahrenheit to celsius or C to convert celsius to fahrenheit\n");
    scanf("%c",&t);
    if(t=='F'){
        printf("enter temperature in fahrenheit\n");
        scanf("%f",&f);
        c=5*(f-32)/9;
        printf("Temperature in celsius=%f",c);
    }
    if(t=='C'){
        printf("Enter temp in celsius");
        scanf("%f",&c);
        f=(9*c/5)+32;
        printf("Temperature in fahrenheit %f",f);
    }
}