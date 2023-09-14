#include<stdio.h>
void fun(int *rev,int n);

int main(){
    int arr[8]={26,45,67,23,44,5,100,2};
    for(int i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    fun(arr,8);
    
    return 0;
}

void fun(int *arr,int n){
    int rev[n],j;
    for(int i=n-1,j=0;i>=0,j<n;i--,j++){
        rev[j]=arr[i];
        printf("%d\t",rev[j]);
    }
    // printf("the reversed array is:\n");
    // for(int i=0;i<n;i++){
    //     printf("%d\t",rev[i]);
    }
