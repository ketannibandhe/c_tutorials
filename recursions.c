//recursions and loops are similar
#include<stdio.h>
void hworld(int count);

int main(){
    hworld(9);
    return 0;
}

void hworld(int x){
    if(x==0){
        return;
    }
    printf("hello world!\n");
    hworld(x-1);
}