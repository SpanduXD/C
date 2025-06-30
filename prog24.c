#include <stdio.h>
void main()
{
    int n,i,j,r=0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0){
            r++;
            break;
            }
        }
        if(r==0)
        printf("%d\n",i);
    }
}