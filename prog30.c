#include <stdio.h>
void main(){
    int a=43;
    float b=12.0;
    char c='a';
    printf("%d,%f,%c",a,b,c);
    int* p1=&a;
    float* p2=&b;
    char* p3=&c;
    printf("Address:%p,%p,%p",p1,p2,p3);
}