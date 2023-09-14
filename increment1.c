#include<stdio.h>
void inc(int num);

int main(){
    int x=4,y;
    int *ptr=&x;
    printf("address of %d is %u\n",x,ptr);
    ptr++;
    printf("address of %d is %u",x,ptr);


}