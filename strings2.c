#include<stdio.h>
int main(){
    char name[20];
    fgets(name,20,stdin);
    //by fgets we can enter n-1 elements in a string
    puts(name);
    return 0;
}