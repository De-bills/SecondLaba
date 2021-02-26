/*#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct hum{
    //char name[20];
    //char family_name[20];
    char gender;
    int weight;
    int height;
}human;

void Instructions()
{
    printf("_________________________\n");
    printf("Make a choice:\n");
    printf("1.Add patient\n");
    printf("2.Delete patient\n");
    printf("3.List\n");
    printf("4.Search\n");
    printf("5.Sort\n");
    printf("0.Exit\n");
    printf("_________________________\n");
    printf("Your choice : ");
}

// Добавить пациента
int Add(int size, human *t) //добавить квартиру
{
    if (size > 1)
    {
        t = calloc(size, sizeof(human));
    }
    //gets(&t[size-1].name);
    //printf("\nВведите имя пациента : ");
    //gets(&t[size-1].name);
    //printf("Введите фамилию пациента : ");
    //gets(&t[size-1].family_name);
    printf("Enter gender (m или f) : ");
    scanf("%s", &t[size-1].gender);
    while (((t[size-1].gender) != 'm') && ((t[size-1].gender) != 'f'))
    {
        printf("Incorrect value\n");
        printf("Enter gender (m или f) : ");
        scanf("%s", &t[size-1].gender);
    }

    printf("Enter weight : ");
    if (scanf("%d",&t[size-1].weight) == 0)
    {
        printf("Incorrect value\n");
        printf("Patient has not been added\n");
        return 0;
    }


    printf("Enter height : ");
    if (scanf("%d", &t[size-1].height) == 0)
    {
        printf("Incorrect value\n");
        printf("Patient has not been added\n");
        return 0;
    }
    printf("Patient added\n");
    size+=1;
    //count+=1;
    return size;
}

// Удалить пациента
int Delete(human *t, int size,int num)
{
    if ((size>1)&&(size>num))
    {
        for (int i = num-1; i < size; i++)
        {
            //t[i].name=t[i+1].name;
            //t[i].family_name=t[i+1].family_name;
            t[i].gender=t[i+1].gender;
            t[i].weight=t[i+1].weight;
            t[i].height=t[i+1].height;
        }
        size-=1;
    }
    t = calloc(size, sizeof(human));
    printf("Patient №%d deleted\n",num);
    return size;
}

// Вывод всех пациентов
void PrintList(int size, human *t, int all)
{
    if (all)
    {
        int i=0;
        if (size==1)
        {
            printf("\nList is empty\n");
        }
        else
        {
            printf("\nList :\n");
            for (i = 0; i < size - 1 ; i++)
            {
                printf(" %d ) ",i+1);
                //printf(" %s - имя ; ",t[i].name);
                //printf(" %s - фамилия ; ",t[i].family_name);
                printf(" %c - gender ; ", t[i].gender);
                printf(" %d - weight ; ", t[i].weight);
                printf(" %d - height . \n", t[i].height);
            }
            printf("\n");
        }
    }
}


int main()
{
    int size = 1, num, menu=1;
    human *t = calloc(size, sizeof(human));

    while (menu!=0)
    {
        Instructions();
        scanf("%d", &menu);
        if (menu==1)
        {
            size = Add(size, t);
            continue;
        }
        else if (menu==2)
        {
            printf("Enter the patient number to be deleted : ");
            scanf(" %d ",&num);
            size=Delete(t,size,num);
            continue;
        }
        else if (menu==3)
        {
            PrintList(size, t, 1);
            continue;
        }
        else if (menu==4)
        {
            continue;
        }
        else if (menu==5)
        {
            continue;
        }
        else
            printf("Incorrect value");
        printf("\n");
    }
    free(t);
    t = NULL;

    return 0;
}*/
