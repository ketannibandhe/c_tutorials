#include<stdio.h>
int main(){
    int n;
    printf("ente a number\n");
    scanf("%d",&n);
    if (n>0){
        printf("the number is positive\n");
        if (n%2==0){
            printf("the number is even\n");
        }
        else{
            printf("the number is odd");
        }
    }
    else{
        printf("the number is negative\n");
    }
    return 0;

}