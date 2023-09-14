#include<stdio.h>
void calc(int a,int b,int *sum,int*prod,int *avg);

int main(){
    int a=3,b=5,sum,prod,avg;
    calc(a,b,&sum,&prod,&avg);
    printf("sum=%d\nproduct=%d\naverage=%d",sum,prod,avg);
    return 0;
}

void calc(int x,int y,int *sum,int*prod,int *avg){
    *sum=x+y;
    *prod=x*y;
    *avg=(x+y)/2;
    
}