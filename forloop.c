// #include<stdio.h>
// int main()
// {
//     int i;//i is a counter variable
//     for(i=10;i>=1;i--)
//     {
//         printf("the number is %d\n",i);
//     }
// }

#include<stdio.h>
int main()
{
    int i,n;//i is a counter variable
    printf("table of which number you want?\n");
    scanf("%d",&n);
    printf("table of %d in reverse order is:\n");
    for(i=10;i>=1;i--)
    {
        printf("%d\n",n*i);
    }
}