#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i==7){
            break;
            /*
            if there are nested loops in a program then by using break 
            in innner loop will take you outside the outermost loop
            directly
            */
        }
        printf("%d\n",i);
    }
    printf("out of the for loop");
    return 0;
}