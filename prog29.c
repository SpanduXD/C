#include <stdio.h>
void main(){
    int n,r=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=2;k<num[j];k++){
            if(num[j]%k==0)
            r+=1;
        }
        if(r==0)
            printf("%d",num[j]);
        else
        printf(" ");
    }
}