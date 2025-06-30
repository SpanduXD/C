#include<stdio.h>
void main(){
    int n;
    printf("Enter the  size of the array:-");
    scanf("%d",&n);
    int num[n];
    int* p[n];
    printf("Enter the elements:-");
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        scanf("%d",&num[i]);
        p[j]=&num[i];
    }
    printf("Reversed order:-");
    for(int k=0;k<n;k++){
        printf("%d",*p[k]);
    }
}