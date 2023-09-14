//we can subtract one pointer from another
//we can also compare two pointers
//pointer arithmatic is applicable to the pointers of the same type
//array is a pointer

#include<stdio.h>
int main(){
    int num1=4,num2=6;
    int *ptr=&num1,*ptr1=&num2;
    printf("%u and %u\nDifference is %u\n",&num1,&num2,ptr-ptr1);
    printf("compaison: %d",ptr==ptr1);
    return 0;
}

// int *ptr=&arr[0];
// int *ptr=arr;
//arr is a pointer pointing to the first element of the array named arr
// above both two statements are same