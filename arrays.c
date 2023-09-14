// arrays
// #include<stdio.h>

// int main(){
//     float price[3];
//     printf("Enter the prices of 3 objects:\n");
//     scanf("%f\n",&price[0]);
//     scanf("%f\n",&price[1]);
//     scanf("%f",&price[2]);
//     printf("The final prices are:\n");
//     for(int i=0;i<=2;i++){
//         price[i]+=(0.18*price[i]);
//         printf("the total price %d is %f\n",i+1,price[i]);
//     }
//     return 0;
// }

//initialization of arrays

#include<stdio.h>
int main(){
    int age =20;
    int *ptr=&age;
    printf("ptr=%u\n",ptr);
    ptr++;//value increases by 1 datatype ie 4 bytes for int
    printf("ptr=%u\n",ptr);
    return 0;
}
