#include<stdio.h>

//function declaration
int fact(int num);

int main(){;
    int x,y;
    printf("Enter the limit for factorial\n");
    scanf("%d",&x);
    y=fact(x);//function call
    printf("Factorial of %d is %d",x,y);
    return 0;

}

//function defination
int fact(int num){
    if(num==1){
        return num;
    }
    num=num*fact(num-1);

}