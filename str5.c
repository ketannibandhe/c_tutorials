#include<stdio.h>
#include<string.h>
void salting(char pass[]);
int main(){
    // char pass[20];
    // printf("Enter your password:\n");
    // gets(pass);
    // // fgets(pass,20,stdin);
    // // puts(pass);
    // char salt[10]="abc";
    // strcat(pass,salt);
    // printf("The salted string is %s\n",pass);
    // return 0;

    char pass[200];
    scanf("%s",pass);
    salting(pass);
    return 0;
}
void salting(char pass[]){
    char newp[200];
    char salt[]="123";
    strcpy(newp,pass);
    strcat(newp,salt);
    puts(newp);
}