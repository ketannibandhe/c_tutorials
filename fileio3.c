#include<stdio.h>
int main(){
    FILE *fptr;
    // fptr=fopen("testfile.txt","r");
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    fptr=fopen("testfile.txt","w");
    fputc('m',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    return 0;

}