#include<iostream>
#include<cstdlib>
#include<cstdio>
#include"StaticLinkList.h"
#include"Query.h"

using namespace std;

void Search(StaticLinkList S,int c)
{
    ElemType Test;
    int i=1;
    int j;
    while(i==1)
    {
        system("cls");
        Header_query();
        Test=Input_plate(Test,1);//����Ҫ�����������ƺ���
        system("cls");
        Header_query();
        printf("\n");
        Space(10);
        cout<<"������"<<Test.plate<<"��Ϣ������..."<<endl;
        printf("\n");
        Line();
        Test=Search_Binary(S,c,Test);
        system("cls");
        Header_query();
        printf("���ҽ����\n");
        if(Test.plate[0]!=0)
        {
            printf("���ƺţ�\t\t��");
            for(j=0;j<6;j++)
                printf("%c",Test.plate[j]);
            printf("\n����������\t\t");
            printf("%s",Test.name);
            printf("\n�������֤�ţ�\t\t");
            printf("%s",Test.ID);
            printf("\n����Ʒ�Ƽ��ͺţ�\t");
            printf("%s",Test.car);
        }
        else
        {
            Space(5);
            printf("δ�ҵ��ó�����Ϣ��\n");
        }
        printf("\n");
        Line();
        printf("\n");
        system("pause");
        printf("ѡ��1.\t������ѯ\t0.\t����������\n");
        printf("��ѡ��\n");
        scanf("%d",&i);
        while(i!=0&&i!=1)
        {
            printf("�����ѡ����ȷ��\n");
            printf("ѡ��1.\t������ѯ\t0.\t����������\n");
            printf("��ѡ��\n");
            scanf("%d",&i);
        }
    }
    system("cls");
    Header_query();
    printf("\n");
    Space(20);
    printf("�����������˵���\n");
    printf("\n");
    Line();
    system("pause");
}
