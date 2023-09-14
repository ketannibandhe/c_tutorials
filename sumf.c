#include<stdio.h>
int sumf(int n);
int sum=0;

int main(){
    int y,x=5,a;
    printf("enter the limit for sum\n");
    scanf("%d",&a);
    y=sumf(a);
    printf("The sum of first %d natural numbers is %d",a,y);
    return 0;
}

int sumf(int n){
    if(n==0){
        return sum;
    }
    sum+=n;
    // printf("%d\n",sum);
    sumf(n-1);
    // return sum;
}