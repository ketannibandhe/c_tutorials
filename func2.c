#include<stdio.h>
int sum(int a,int b);
int main()
{
int c,d,ans;
printf("enter number1:\n");
scanf("%d",&c);
printf("enter number2:\n");
scanf("%d",&d);
ans=sum(c,d);//here c and d are actual parameters or arguments
printf("summation of %d and %d is %d",c,d,ans);
return 0;
}

int sum(int a,int b)//here a and b are formal parameters or parameters
{
    /*as here there is int for function 
    the function sum should return an integer value */
    int s;
    s=a+b;
    // printf("sum of %d and %d is %d",a,b,s);
    return s;
}