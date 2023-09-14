/*
realloc() reallocate (increase or decrease) memory
using the same pointer &size
*/

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *)calloc(5,sizeof(int));
//     printf("enter numbers(5):\n");
//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }
//     ptr=realloc(ptr,8);
//     printf("enter numbers(8):\n");
//     for(int i=0;i<8;i++){
//         scanf("%d",&ptr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        printf("%d\n",(2*i)+1);
    }
    ptr=realloc(ptr,6);
    for(int i=0;i<6;i++){
        printf("%d\n",(2*i));
    }
    free(ptr);
    return 0;

}

