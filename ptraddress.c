// //call by value
// #include<stdio.h>
// void adr(int num);

// void main(){
//     int x=4;
//     printf("the address of %d in main function is: %d\n",x,&x);
//     adr(x);

// }

// void adr(int num){
//     printf("the address of %d inside the function is: %d",num,&num);
// }



//call by refernce
#include<stdio.h>
void adr(int *num);

void main(){
    int x=4;
    printf("the address of %d in main function is: %p\n",x,&x);
    adr(&x);
}

void adr(int *num){
    printf("the address of %d inside the function is: %p",*num,num);
}