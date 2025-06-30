#include<stdio.h>
#include<math.h>
void main()
{
    int a,n,rev=0,i;
    printf("Enter a number to check whether it is a palindrome no\n");
    scanf("%d",&a);
    int m=a;
    while(m>0){
        i=m%10;
        rev=rev*10+i;
        m=m/10;
    }
    if(rev==a)
    printf("%d is a palindrome number",a);
    else
    printf("%d is not a palindrome number",a);
}