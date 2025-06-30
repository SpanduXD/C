#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("%d ",num[j]);
    }
}