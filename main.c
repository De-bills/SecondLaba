#include<stdio.h>
#include "test.h"

typedef struct human{
    char name[20];
    char family_name[20];
    char gender;
    int weight;
    int height;
}pacient;

int main()
{
    int menu; // User choice
    int size; // Quantity of structures

    do{
        Instructions();
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            AddElement;
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
