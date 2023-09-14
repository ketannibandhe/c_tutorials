#include<stdio.h>
int main()
// {
//     int i=0,j=0;    
//     int arr[2][10]; 
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<10;j++)
//         {
//             arr[i][j]=(i+2)*(j+1);
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// return 0;
// }
{
    int i=0,j=0;    
    int arr[10][15]; 
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<15;j++)
        {
            arr[i][j]=(i+1)*(j+1);
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}