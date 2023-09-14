// //reading from a file
#include<stdio.h>

int main(){
FILE *fptr;
fptr=fopen("testfile.txt","r");
char ch;
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fclose(fptr);
    return 0;
}

//reading from a file
// #include<stdio.h>

// int main(){
// FILE *fptr;
// fptr=fopen("testfile.txt","r");
// int ch;
// fscanf(fptr,"%d",&ch);
// printf("character =%d\n",ch);
// fscanf(fptr,"%d",&ch);
// printf("character =%d\n",ch);
// fscanf(fptr,"%d",&ch);
// printf("character =%d\n",ch);
// fclose(fptr);
//     return 0;
// }