// #include<stdio.h>
// //function declaration//prototype
// void printhello();

// int main(){
//     printf("my name is ketan\n");
//     printhello();//function call
//     return 0;
// }

// //function defination
// void printhello(){
//     printf("hello all!");
    
// }

#include<stdio.h>
//function declaration//prototype
void printhello();
void printgoodbye();

char y,n,ans;
int main(){
    printf("are you going to meet someone(y/n)?\n");
    scanf("%s",&ans);
    if(ans=='y')
    {
        printhello();
    }
    else{
        printgoodbye();
    }

}
//function defination
void printhello(){
    printf("then say:\nhello! Nice to meet you");
}
    
void printgoodbye(){
printf("then say:\nNice to meet you.\nGood Bye!");
}