#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file.txt","a");
    int n;
    int count=0;
    while(1){
        printf("Enter a Number\n");
        scanf("%d",&n);
        count++;
        if(n%2!=0){
            fprintf(fptr,"%d\n",n);
        }
        if(count==20){
            break;
        }
        
    }
    fclose(fptr);
    return 0;
}