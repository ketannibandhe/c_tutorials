//string is an array which inturn is a pointer
/*
char *str="hello world" stor string in memory & the assigned address
is stored in the char pointer 'str'
string as a pointer {*str} can be reinitialized
string as an array {str[]} cannot be reinitialized
*/
#include<stdio.h>
int main(){
    char *name="ketan n";
    puts(name);
    name="gayatri";//here we have changed in the pointer
    puts(name);
}

// int main(){
//     char name[]="ketan n";
//     puts(name);
//     name="gayatri";//here we can't modify the character array 
//     puts(name);
// }

