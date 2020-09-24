#include<stdio.h>
void main()
{
    int x;
    do
    {
        printf("Welcome to the princy's cafe\n");

        label:
        printf("\t<<<MENU>>>>\n");
        printf("1==Punjab di lassi\n");
        printf("2==aalu da paratha\n");
        printf("3==pizza\n");
        printf("4==dhosa\n");
        printf("5==sandwitch\n\n");


        printf("press the item number which you want...\n");
        printf("or press 0 if you don't want to buy any items\n\n");
        scanf("%d",&x);
        printf("\n");

        switch(x)
        {
        case 0:
            printf("\t\tthank you for giving us your valuable time\n");
            exit(0);
        case 1:
            printf("You buy Punjab di lassi\n\n");
            break;
        case 2:
            printf("You buy aalu da paratha\n\n");
            break;
        case 3:
            printf("You buy pizza\n\n");
            break;
        case 4:
            printf("You buy dhosa\n\n");
            break;
        case 5:
            printf("You buy sandwitch\n\n");
            break;
        default:
            printf("please enter valid number\n\n");
            break;
        }

    printf("do you want more items ? ? ? ?\n\n");

    printf("press 1 if you want more items\n");
    printf("press 0 if you don't want more items\n");
    scanf("%d",&x);
    printf("\n");

    if(x==1)
    {
        goto label;
    }
    if(x==0)
    {
        printf("thank you for giving us your valuable time\n");
         printf("see you again");
         printf("\n");
    }
    }while(x!=0);
}
