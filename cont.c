// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=40;i++){
//         printf("%d\n",2*i);
//         if((2*i%4)==0){
//             continue;
//             /*continue will let you out of the
//              current iteration of the loop*/
//         }
//         printf("abc\n");
//             printf("def\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int i;
    for(i=5;i<=10;i++){
        if(i%2==0){
            continue;
            //it will move to the next iteration of the loop skipping remaining part in the loop
        }
        printf("%d\n",i);
    }
    return 0;
}