#include<stdio.h>
int main(){
    char name[20]="ketan";
    fgets(name,20,stdin);
    puts(name);
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    printf("The length of the string is : %d",cnt-1);
    //as the count variable is also considering the \0
    return 0;
}