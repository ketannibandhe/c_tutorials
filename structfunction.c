#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int rollno;
    float cgpa;
};

void printinfo(struct student s1);
int main(){
    struct student s1={"ketan",13,8.17};
    printinfo(s1);
}
void printinfo(struct student s1){
    printf("s1 name=%s\n",s1.name);
    printf("s1 rollno=%d\n",s1.rollno);
    printf("s1 name=%f\n",s1.cgpa);
}