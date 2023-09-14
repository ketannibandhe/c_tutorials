#include<stdio.h>

int main(){
    FILE *fptr;
    //fptr=fopen("filename",mode);
    fptr=fopen("testfile.txt","r");
    fclose(fptr);//it is an ideal practice to close the file once after opening
    return 0;
}
/*
file opening modes
r  open to read 
rb open to read in binary
w  open to write 
wb open to write in binary
a  open to appened

in r and rb mode if the file we want to access doesn't exist 
then pointer will store the null value

in w and wb mode if the file we want to access doesn't exist 
then w and wb functions will create that file

best practice
check if the file exist before reading from it

*/