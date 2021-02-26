#include<stdio.h>
#include<stdlib.h>
#include "var.h"

int Instructions()
{
    printf("--------------------------\\\n");
    printf("Make a choice:            |\n");
    printf("1) Add                    |\n");
    printf("2) Delete                 |\n");
    printf("3) List                   |\n");
    printf("4) Sort                   |\n");
    printf("--------------------------/\n");
    printf("Your choice : ");
};

int main()
{
    int menu; // User choice

    do{
        Instructions();
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            break;
        case 2:
            DeleteElement;
            break;
        case 3:
            PrintList;
            break;
        case 4:
            Sort;
            break;
        case 0:
            printf("Program completed");
            return 0;
        default:
            printf("Invalid value\n");
            break;
        }
    }while(menu != 0);


    return 0;
}
