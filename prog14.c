#include <stdio.h>
int main()
{
    int a,r,s;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(r=1;r<=a;r++)
    {
        if(a%r==0)
        {
            s++;
        }
        else{
            s=s;
        }
    }
    if(s==2)
    {
        printf("The number is prime");
    }
    else{
        printf("The number is composite");
    }
}