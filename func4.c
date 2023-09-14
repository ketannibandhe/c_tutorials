#include<stdio.h>
#include<math.h>
void power(int x);

int main(){
    int n;
    printf("enter the number for power:\n");
    scanf("%d",&n);
    power(n);
    return 0;
}

void power(int x){
    int y;
    y=pow(x,2);
    printf("square of %d is %d",x,y);
}