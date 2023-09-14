#include<stdio.h>

int fib(int n);

int main(){
    int x,y;
    printf("enter the number for fibonacci series\n");
    scanf("%d",&x);
    y=fib(x);
    printf("fibanacci number is %d",y);
    return 0;

}

int fib(int n){
    if(n==0||n==1){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    }
    int z;
    z=fib(n-1)+fib(n-2);
    return z;

}