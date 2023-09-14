#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[50];
        int rollno;
        float cgpa;
    };
    struct student s1={"ketan",13,8.17};
    struct student *ptr=&s1;
    printf("s1.name=%s\n",s1.name);
    printf("s1.name=%s\n",(*ptr).name);//using poiter
    printf("s1.name=%s\n",ptr->name);//using arrow operator
    return 0;

}