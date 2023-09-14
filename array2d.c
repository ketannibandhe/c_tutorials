#include<stdio.h>
int main()

{
    int i=0,j=0;    
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}