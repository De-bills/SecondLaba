#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct hum{
    //char name[20];        // ���
    //char family_name[20]; // �������
    char gender;        // ���(m ��� f)
    int weight;         // ���
    int height;         // ����
}human;

void Instructions()
{
    printf("_________________________\n");
    printf("�������� �����:\n");
    printf("1.�������� ��������\n");
    printf("2.������� ��������\n");
    printf("3.������� ������ ���������\n");
    printf("4.����� �������� �� ��������� ���������\n");
    printf("5.�������������� ������ �� ���������� �������� �\n");
    printf("0.�����\n");
    printf("_________________________\n");
    printf("��� ����� : ");
}

// �������� ��������
int Add(int size, human *t) //�������� ��������
{
    if (size > 1)
    {
        t = calloc(size, sizeof(human));
    }
    //gets(&t[size-1].name);
    //printf("\n������� ��� �������� : ");
    //gets(&t[size-1].name);
    //printf("������� ������� �������� : ");
    //gets(&t[size-1].family_name);
    printf("������� ��� �������� (m ��� f) : ");
    scanf("%s", &t[size-1].gender);
    while (((t[size-1].gender) != 'm') && ((t[size-1].gender) != 'f'))
    {
        printf("�� ����� ������������ ��������\n");
        printf("������� ��� �������� (m ��� f) : ");
        scanf("%s", &t[size-1].gender);
    }

    printf("������� ��� �������� : ");
    if (scanf("%d",&t[size-1].weight) == 0)
    {
        printf("�� ����� ������������ ��������\n");
        printf("������� �� ��� ��������\n");
        return 0;
    }


    printf("������� ���� �������� : ");
    if (scanf("%d", &t[size-1].height) == 0)
    {
        printf("�� ����� ������������ ��������\n");
        printf("������� �� ��� ��������\n");
        return 0;
    }
    printf("������� ��������\n");
    size+=1;
    //count+=1;
    return size;
}

// ������� ��������
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
    printf("������� �%d ������\n",num);
    return size;
}

// ����� ���� ���������
void PrintList(int size, human *t, int all)
{
    if (all)
    {
        int i=0;
        if (size==1)
        {
            printf("\n������ ����\n");
        }
        else
        {
            printf("\n������ :\n");
            for (i = 0; i < size - 1 ; i++)
            {
                printf(" %d ) ",i+1);
                //printf(" %s - ��� ; ",t[i].name);
                //printf(" %s - ������� ; ",t[i].family_name);
                printf(" %c - ��� ; ", t[i].gender);
                printf(" %d - ��� ; ", t[i].weight);
                printf(" %d - ���� . \n", t[i].height);
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
            printf("������� ����� ���������� �������� : ");
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
            printf("�� ����� ������������ ��������");
        printf("\n");
    }
    free(t);
    t = NULL;

    return 0;
}
