#include<stdio.h>
void main(){
    int a =1.999999;//implicit conversion
    printf("%d",a);//type conversion from double to int is not possible

    // int a = (int)1.999999; //explicit conversion
    // printf("%d",a);
}