#include<stdio.h>
int main(){
    int arr[5];
    int *ptr= &arr[0];
    for(int i=0;i<5;i++){
        printf("index%d:",i);
        scanf("%d",(ptr+i));//&arr[i]    
    }

    printf("The given Array is:\n");
    for(int i=0;i<5;i++){
        printf("index%d: %d\n",i,*(ptr+i));//arr[i];
    }
    return 0;
}