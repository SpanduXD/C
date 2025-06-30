#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in Farenheit\n");
    scanf("%f",&f);
    c=(9.0/5.0)*(f-32);
    printf("Temperature in celsius=%f",c);
}