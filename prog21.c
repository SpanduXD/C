#include<stdio.h>
void main()
{
    int a,b,gcd,lcm;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int m=a;
    int n=b;
    while(m!=n){
        if(m>n)
        m=m-n;
        else
        n=n-m;
    }
    gcd=m;
    lcm=(a*b)/m;
    printf("The GCD of %d and %d=%d\n",a,b,gcd);
    printf("LCM of %d and %d=%d",a,b,lcm);
}