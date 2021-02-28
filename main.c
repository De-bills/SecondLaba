#include<stdio.h>
#include<stdlib.h>
#include "test.h"

typedef struct human{
    char name[20];
    char family_name[20];
    char gender[0];
    int weight;
    int height;
}Pacient;
=======

int main()
{
    int menu; // User choice
    int size = 0; // Quantity of structures
    Pacient *t = calloc(size, sizeof(Pacient)); // Dynamic structure
    do{
        Instructions();
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            size = AddElement(size,t);
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

    free(t);
    t = NULL;

    return 0;
}
