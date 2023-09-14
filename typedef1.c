//typedef keyword is used to create alias for datatypes
//alias is means alternative name
#include<stdio.h>
#include<string.h>

typedef struct computer_engineering_student{
    char name[50];
    int rollno;
    float cgpa;
}ces;


int main(){
//instead of struct computer_engineering_student we write just ces
ces s1={"ketan",13,9.2};
printf("s1 name=%s\n",s1.name);
printf("s1 rollno=%d\n",s1.rollno);
printf("s1 name=%f\n",s1.cgpa);
return 0;
}
