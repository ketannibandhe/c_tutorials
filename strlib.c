//standard library functions
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="maharashtra";

    //strlen
    int length=strlen(name);
    printf("the length of the string '%s' is %d\n",name,length);
    //strlen doesn't return int, it returns unsigned long

    //strcpy(newstr,oldstr)
    char city[]="satara";
    printf("the string inside city is %s\n",city);
    strcpy(city,name);
    printf("the string inside city is %s\n",city);

    //strcat(firststr,secstr)
    char str1[30]="ketan ";
    char str2[15]="nibandhe";
    strcat(str1,str2);
    printf("The new string will be %s\n",str1);

    //strcmp(firststr,secstr)
    char str3[15]="apple";
    char str4[15]="Apple";
    char str5[30]="elephant";
    char str6[15]="ball";
    printf("The comparison between %s and %s is %d\n",str3,str4,strcmp(str3,str4));
    printf("The comparison between %s and %s is %d\n",str4,str5,strcmp(str4,str5));
    printf("The comparison between %s and %s is %d\n",str5,str6,strcmp(str5,str6));

    return 0;
}