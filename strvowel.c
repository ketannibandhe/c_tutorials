#include<stdio.h>
#include<string.h>
void vowel(char str[]);

int main(){
    char str[50],var;
    gets(str);
    printf("%s\n",str);
    vowel(str);
    return 0;
}
void vowel(char str[]){
    int count=0;
    char str1[50];
    strcpy(str1,str);
    int len=strlen(str1);
    for(int i=0;i<=len;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    printf("The total number of vowels in %s is %d",str1,count);


}