#include<iostream>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Admin.h"
#include<stdio.h>

using namespace std;

void Administrator()
{
    int i;
    while(i!=0)
    {
        system("cls");
        Header_administrator();
        Administrator_interfasce();
        printf("��ѡ��\n");
        scanf("%d",&i);
        while(i<0||i>8)
        {
            printf("�����ѡ����ȷ��\n");
            printf("��ѡ��1��2��3��4��5��6��7��8����0\n");
            printf("��ѡ��:\n");
            scanf("%d",&i);
        }
        switch(i)
        {
            case 1:Enter_screen();break;
            case 2:Enter_file();break;
            case 3:Amend();break;
            case 4:Delete();break;
            case 5:Show();break;
            case 6:Backups();break;
            case 7:Clearfile();break;
            case 8:Password_Change();break;
            case 0:
                system("cls");
                Header_administrator();
                printf("\n");
                Space(20);
                printf("�����������˵���\n");
                printf("\n");
                Line();
                system("pause");
                break;
        }
    }
}
