#include<stdio.h>
void opn(int *arr,int n);
int main(){
    int i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    opn(arr,10);
    return 0;
}
void opn(int arr[],int n){
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     printf("%d\t",arr[i]);
        
    // }
    // printf("\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d\n",arr[i]);
        }
        // arr[i]*=100;
        // printf("%d\n",arr[i]);
        
        // sum+=arr[i];
    }
    // printf("sum of all the array elements is %d",sum);

}
