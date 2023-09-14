#include<stdio.h>

void table(int x);

int main(){
    int n;
    printf("enter a number for table:\n");
    scanf("%d",&n);
    table(n);
    return 0;
}

void table(int x){
    printf("the table for %d is:\n",x);
    for(int i=1;i<=10;i++){
        printf("%d\n",x*i);
    }
}