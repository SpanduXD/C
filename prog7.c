#include<stdio.h>
int main()
{
    int a;
    char r;
    printf("Enter a number");
    scanf("%d",&a);
   if(a%2==0)
   {
    printf("The number is even");
   }
   else{
    printf("The number is odd");
   }
    return 0;
}