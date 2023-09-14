#include<stdio.h>
#include<string.h>
void find(char str[],char var);

int main(){
    char str[50],var;
    gets(str);
    printf("%s\n",str);
    printf("search a letter\n");
    scanf("%c",&var);
    find(str,var);
    return 0;
}
void find(char str[],char var){
    int count=0;
    char str1[50];
    strcpy(str1,str);
    int length=strlen(str);
    for(int i=0;i<=length;i++){
        if(str1[i]==var){
            printf("letter found\n");
            break;
        }
    }
    printf("letter not found");
}