#include <stdio.h>
void main(){
    int a=21,*ptr;
    ptr=&a;
    int **ptr1=&ptr;
    printf("Address=%p",ptr);
    printf("address of pointer=%p",ptr1);
}