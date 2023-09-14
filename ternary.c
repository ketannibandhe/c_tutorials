#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    marks>=35? printf("pass") : printf("fail");
    /* here note that we have not used ; after first printf statement 
    because we the statement doesn't end there
    we use ternary operator instead of the single statment
    */
}