//writing to a file 
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("testfile.txt","w");

    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'o');

    fclose(fptr);
    return 0;
}