#include<stdio.h>
int main(){
    int i,j,arr[4][4],max;
    printf("Enter the array elements:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    max=arr[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    printf("the maximum element of the given matrix is %d",max);
    return 0;
}