#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};

void calsum(struct vector v1,struct vector v2,struct vector sum);


int main(){
    struct vector v1;
    printf("enter x and y coordinates of first vector\n");
    scanf("%d\n",&v1.x);
    scanf("%d",&v1.y);
    struct vector v2={2,9};
    struct vector sum={0};//initialized to 0
    calsum(v1,v2,sum);
    return 0;
}

void calsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("the sum of x components : %d\n",sum.x);
    printf("the sum of y components : %d\n",sum.y);
    printf("the new vector is: %di+%dj",sum.x,sum.y);
}