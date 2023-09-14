//call by value and call by reference 

#include<stdio.h>
void sqr(int num);
void sq(int *num);

int main(){
    int x=4;
    sqr(x);//here we have passed copy of the variable
    printf("The value of is %d\n",x);
    //call by reference
    sq(&x);//here we have passed address of the variable
    printf("The value of is %d\n",x);
}

void sqr(int num){
    num*=num;
    printf("The square is %d\n",num);
}
void sq(int *num){
    (*num)*=(*num);
    printf("The square is %d\n",(*num));
    //here we have made the changes in the variable itself
}