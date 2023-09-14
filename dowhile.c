// #include<stdio.h>
// int main(){
//     int i=12;
//     do{
//         printf("%d\n",(2)*i);
//         i++;
//     }while (i<12);
//     return 0;
// }//though the condition is not satisfied code is executed at least once

#include<stdio.h>
int main(){
    int sum=0,n;
    printf("enter the limit for sum\n");
    scanf("%d",&n);
    int i=1;
    printf("the first %d numbers in reverse are:\n",n);
    do{
        printf("%d\n",n+1-i);
        sum+=i;
        i++;
    }while (i<=n);
    printf("the sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}