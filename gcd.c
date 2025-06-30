#include<stdio.h>
int find_gcd(int m,int n){
    while(m!=n){
        if(m>n)
        m=m-n;
        else
        n=n-m;
    }
    return m;
}
int find_lcm(int o,int p){
    return (o*p)/find_gcd(o,p);
}
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int gcd=find_gcd(a,b);
    int lcm=find_lcm(a,b);
    printf("GCD=%d and LCM=%d",gcd,lcm);
    return 0;
}