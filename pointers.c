#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    char a='f';//character variable declaration
    char *var=&a;//pointer to character
    int _age=*ptr;
    char **pptr=&var;
    printf("%c\n",**pptr);
    printf("%d\n",age);
    printf("%c\n",a);
    printf("%p\n",&a);
    printf("%p\n",ptr);//address of age in hexadecimal form
    printf("%u\n",ptr);//The same address of age in numerical form(unsigned int)
    printf("%p\n",&age);
    printf("%d\n",_age);
}