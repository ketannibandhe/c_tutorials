#include<stdio.h>

void numbers(int *arr,int n);//it can be arr[] intead of *arr
int main(){
    int arr[]={12,24,36,48,60};
    numbers(arr,5);//arr = &arr[0]
    return 0;
}
void numbers(int *arr,int n){//it can be arr[] intead of *arr
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}