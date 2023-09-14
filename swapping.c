#include<stdio.h>
void swp(int *num,int *ptr);

int main(){
    int x=4,y=5;
    printf("Value of x is: %d\n",x);
    printf("Value of y is: %d\n",y);
    swp(&x,&y);
    printf("Value of x is: %d\n",x);
    printf("Value of y is: %d\n",y);
    return 0;
}
/* To make the changes in variable inside the main function,
we have to call the variabes by reference
*/
void swp(int *num,int *ptr){
    *num=*ptr+*num;
    *ptr=*num-*ptr;
    *num=*num-*ptr;
}