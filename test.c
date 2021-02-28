// Function initialization

#include<stdio.h>
#include<stdlib.h>

typedef struct human{
    char name[20];
    char family_name[20];
    char gender[0];
    int weight;
    int height;
}Pacient;

void Instructions()
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

int AddElement(int size,Pacient *t)
{
    size ++;
    t = calloc(size, sizeof(Pacient));
    printf("Enter name : ");
    scanf("%s",t[size-1].name);
    printf("Enter family_name : ");
    scanf("%s",t[size-1].family_name);
    printf("Enter gender (m or f) : ");
    scanf("%s",t[size-1].gender);
    printf("Enter weight : ");
    scanf("%d",&t[size-1].weight);
    printf("Enter height : ");
    scanf("%d",&t[size-1].height);

    return size;
};

int DeleteElement();

int PrintList();

int Sort();
