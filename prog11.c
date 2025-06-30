#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in celsius");
    scanf("%f",&c);
    f=(c*9.0/5.0)+32;
    printf("Temperature in farenheit=%f",f);
}