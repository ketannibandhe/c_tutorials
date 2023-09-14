#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the number is even number\n");
    }
    else
    {
        printf("the number is odd number\n");
    }
    printf("that's all about the if else statements");
}