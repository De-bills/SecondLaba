#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct hum{
    //char name[20];        // Имя
    //char family_name[20]; // Фамилия
    char gender;        // Пол(m или f)
    int weight;         // Вес
    int height;         // Рост
}human;

void Instructions()
{
    printf("_________________________\n");
    printf("Сделайте выбор:\n");
    printf("1.Добавить пациента\n");
    printf("2.Удалить пациента\n");
    printf("3.Вывести список пациентов\n");
    printf("4.Поиск пациента по заданному параметру\n");
    printf("5.Упорядочивание списка по выбранному элементу п\n");
    printf("0.Выйти\n");
    printf("_________________________\n");
    printf("Ваш выбор : ");
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
    printf("Введите пол пациента (m или f) : ");
    scanf("%s", &t[size-1].gender);
    while (((t[size-1].gender) != 'm') && ((t[size-1].gender) != 'f'))
    {
        printf("Вы ввели некорректное значение\n");
        printf("Введите пол пациента (m или f) : ");
        scanf("%s", &t[size-1].gender);
    }

    printf("Введите вес пациента : ");
    if (scanf("%d",&t[size-1].weight) == 0)
    {
        printf("Вы ввели некорректное значение\n");
        printf("Пациент не был добавлен\n");
        return 0;
    }


    printf("Введите рост пациента : ");
    if (scanf("%d", &t[size-1].height) == 0)
    {
        printf("Вы ввели некорректное значение\n");
        printf("Пациент не был добавлен\n");
        return 0;
    }
    printf("Пациент добавлен\n");
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
    printf("Пациент №%d удален\n",num);
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
            printf("\nСписок пуст\n");
        }
        else
        {
            printf("\nСписок :\n");
            for (i = 0; i < size - 1 ; i++)
            {
                printf(" %d ) ",i+1);
                //printf(" %s - имя ; ",t[i].name);
                //printf(" %s - фамилия ; ",t[i].family_name);
                printf(" %c - пол ; ", t[i].gender);
                printf(" %d - вес ; ", t[i].weight);
                printf(" %d - рост . \n", t[i].height);
            }
            printf("\n");
        }
    }
}


int main()
{
    setlocale(LC_ALL,"Rus");
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
            printf("Введите номер удаляемого пациента : ");
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
            printf("Вы ввели некорректное значение");
        printf("\n");
    }
    free(t);
    t = NULL;

    return 0;
}
