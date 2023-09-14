/*
malloc provides the memory in bytes and
make us available in the form of void pointer
*/
/*
malloc   it is present in the library called stdlib
ptr=(int*)malloc(5*sizeof(int));
this will allocate the memory 5x the memory of int datatype ie 20bytes 
for this system. (int*) indicates the type of pointer
memory will be allocated in the program in ptr
*/
#include<stdio.h>
#include<stdlib.h>
// int main(){
//     printf("int %d\n",sizeof(int));
//     printf("float %d\n",sizeof(float));
//     printf("char %d\n",sizeof(char));
//     return 0;
// }

int main(){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    /*
    if system is unable to provide the reqired memory then ptr will enter null
    */
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=6;
    // ptr[4]=78;
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}