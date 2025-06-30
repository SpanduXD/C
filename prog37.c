#include<stdio.h>
int find_largest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int find_smallest(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main(){
    int n;
    printf("ENter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("LArgest among them=%d\n",find_largest(arr,n));
    printf("SMallest=%d",find_smallest(arr,n));
}