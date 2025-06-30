#include <stdio.h>
int mat(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }
    return m[3][3];
}
int main(){
    int m1[3][3],m2[3][3],sum[3][3];
    printf("Enter the elements of 1st matrix\n");
    mat(m1);
    printf("enter the elements of 2nd matrix\n");
    mat(m2);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}