//string without a null character is called a character array
#include<stdio.h>
void name(char arr[]);
int main(){
    // char name[]={'k','e','t','a','n','\0'};
    // char name1="ketan Nibandhe";//Always use double quotes
    // //the space between names is automtically getting added in the string
    
    
    // char first[]="ketan";
    // char last[]="Nibandhe";
    // name(first);
    // name(last);

    char name[50];
    scanf("%s",name);
    //scanf can't take multi word string as an input
    //to enter mutiword string we use gets() and puts()or fgets()
    printf("the string entered is %s\n",name);
    return 0;
}

void name(char name[]){
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);       
    }
    printf(" ");//here space is given
}
