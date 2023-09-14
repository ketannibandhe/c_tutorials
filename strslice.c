#include<stdio.h>
#include<string.h>
void slice(char str[],int x,int y);

int main(){
    int s,l;
    char str[50];
    gets(str);
    // printf("%s",str);
    // puts(str);
    printf("enter the starting limit of the string\n");
    scanf("%d",&s);
    printf("enter the end limit of the string\n");
    scanf("%d",&l);
    slice(str,s,l);
    return 0;

}
void  slice(char str[],int x,int y)
{
    char str1[50];
    int j=0;
    // strcpy(str1,str);
    for(int i=x;i<=y;i++,j++){
        str1[j]=str[i];
        printf("%c",str1[j]);
    }
    // str1[j]='\0';
    // puts(str1);
}