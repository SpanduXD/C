#include<stdio.h>
void main()
{
    int sum=0,n,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+num[j];
    }
    printf("Sum=%d",sum);
}