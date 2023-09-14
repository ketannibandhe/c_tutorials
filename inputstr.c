#include<stdio.h>
int main(){
    char str1[15];
    char ch;
    int i=0;
    printf("enter the string\n");
    while(ch!="\n"){
        scanf("%c",&ch);
        str1[i]=ch;
        i++;
    }
    printf("\0");
    puts(str1);
    return 0;
}