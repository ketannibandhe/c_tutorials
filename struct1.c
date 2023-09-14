#include<stdio.h>
#include<string.h>

struct student{//structure declaration
    char name[40];
    int rollno;
    float cgpa;
};//here we have defined the datatype
int main(){
    struct student s1;//initialization of the structure variable
    //s1 is a variable of datatype stuct student
    strcpy(s1.name,"ketan");//assigning the value to the variable
    s1.rollno=1;//assigning the value to the variable
    s1.cgpa=7.9;//assigning the value to the variable
    //s1.name="ketan";
    

    printf("s1 name=%s\n",s1.name);
    printf("s1 rollno=%d\n",s1.rollno);
    printf("s1 name=%f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"ganesh");
    s2.rollno=2;
    s2.cgpa=8.9;
    

    printf("s2 name=%s\n",s2.name);
    printf("s2 rollno=%d\n",s2.rollno);
    printf("s2 name=%f\n",s2.cgpa);

    struct student divb[70];
    strcpy(divb[1].name,"virag");
    divb[1].rollno=1;
    divb[1].cgpa=8.3;
    printf("roll no. 1=%d\n",divb[1].rollno);
    printf("name 1=%s\n",divb[1].name);
    printf("cgpa 1=%f\n",divb[1].cgpa);

    // struct student divb[13];
    struct student s3={"ketan",13,8.17};
    printf("divb[13] name =%s\n",s3.name);
    printf("divb[13] rollno. =%d\n",s3.rollno);
    printf("divb[13] cgpa =%f\n",s3.cgpa);
    

    return 0;
}


    
