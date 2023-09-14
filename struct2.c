#include<stdio.h>
#include<string.h>
struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
};

void pritndaddr(struct address add);
int main(){
    struct address adds[5];

        printf("enter the info for person1:\n");
        scanf("%d",&adds[0].houseno);
        scanf("%d",&adds[0].block);
        scanf("%s",&adds[0].city);
        scanf("%s",&adds[0].state);

        printf("enter the info for person2:\n");
        scanf("%d",&adds[1].houseno);
        scanf("%d",&adds[1].block);
        scanf("%s",&adds[1].city);
        scanf("%s",&adds[1].state);

        printf("enter the info for person3:\n");
        scanf("%d",&adds[2].houseno);
        scanf("%d",&adds[2].block);
        scanf("%s",&adds[2].city);
        scanf("%s",&adds[2].state);

        printf("enter the info for person4:\n");
        scanf("%d",&adds[3].houseno);
        scanf("%d",&adds[3].block);
        scanf("%s",&adds[3].city);
        scanf("%s",&adds[3].state);

        printf("enter the info for person5:\n");
        scanf("%d",&adds[4].houseno);
        scanf("%d",&adds[4].block);
        scanf("%s",&adds[4].city);
        scanf("%s",&adds[4].state);

        pritndaddr(adds[0]);
        pritndaddr(adds[1]);
        pritndaddr(adds[2]);
        pritndaddr(adds[3]);
        pritndaddr(adds[4]);

        return 0;
    }

    void pritndaddr(struct address add){
        printf("the address is : %d,%d,%s,%s\n",add.houseno,add.block,add.city,add.state);
    }
