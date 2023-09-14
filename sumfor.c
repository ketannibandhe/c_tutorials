#include<stdio.h>
int main(){
    int i,j,n,sum=0;
    printf("enter the limit\n");
    scanf("%d",&n);
    for(i=1, j=n; i<=n && j>=1 ; i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
    printf("the sum of first %d numbers is %d",n,sum);
    return 0;
}