#include<stdio.h>
int gcd(int m,int n){
    while(m!=n){
        if(m>n)
        return gcd(m-n,n);
        else
        return gcd(m,n-m);
    }
    return m;
}
int main(){
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("GCD=%d",gcd(a,b));
return 0;
}