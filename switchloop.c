#include<stdio.h>
int main()
{
   char opn; 
   int a,b;
   printf("enter number1\n");
   scanf("%d",&a);
   printf("enter number2\n");
   scanf("%d",&b);
   printf("enter the operation you want to carry out\n");
   scanf("%c",&opn);
   switch (opn){
   case '+':
    printf("addition of %d and %d is %d",a,b,a+b);
    break;
   case '-':
    printf("subtraction of %d and %d is %d",a,b,a-b);
    break;
   case '*':
    printf("multiplication of %d and %d is %d",a,b,a*b);
    break;
   case '/':
    printf("division of %d and %d is %d",a,b,a/b);
    break;
   default:
    printf("invalid operation");
   }   
   return 0;
}