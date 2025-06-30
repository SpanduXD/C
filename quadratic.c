#include<stdio.h>
#include<math.h>
void main(){
    float r1,r2,a,b,c,D;
    printf("ENter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-4*a*c;
    r1=((-b)+(sqrt(D)))/(2*a);
        r2=((-b)-(sqrt(D)))/(2*a);
    if(D>0){
        printf("Real and distinct roots=%f,%f",r1,r2);
    }
    else if(D==0){

         printf("Real and equal roots=%f,%f",r1,r2);
    }
    else
    printf("Imaginary roots");
}