#include<stdio.h>  
int main()  
{  
    int n, arr[n], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j;  
    for(j=0,i = n-1; i >= 0,j<n; i--,j++)  
    {  
        rev[j] = arr[i];  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d", rev[i]);  
    }  
return 0;
}  
