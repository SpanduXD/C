#include<stdio.h>
int find_gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int find_lcm(int a,int b){
    return(a*b)/find_gcd(a,b);
}
int main(){
    int n1,n2,gcd,lcm;
    printf("Enter two integers\n");
    scanf("%d%d",&n1,&n2);
    gcd=find_gcd(n1,n2);
    lcm=find_lcm(n1,n2);
    printf("GCD=%d",gcd);
    printf("LCM=%d",lcm);
    return 0;
}