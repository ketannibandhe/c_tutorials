//change to parameter in function don't change the values in calling function
#include<stdio.h>
void gst(float value);

int main(){
    float x=100;
    // printf("Enter the amount:\n");
    // scanf("%f",&x);
    gst(x);
    printf("%f",x);//here value printed will not be 118 ,it will be 100
    return 0;
}

void gst(float value){
    value=value+(0.18*value);
    printf("The net amount with GST is %f\n",value);
}