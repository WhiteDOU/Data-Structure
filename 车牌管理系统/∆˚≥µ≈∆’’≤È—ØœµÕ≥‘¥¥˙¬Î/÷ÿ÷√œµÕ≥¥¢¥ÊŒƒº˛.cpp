#include<iostream>
#include<cstring>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Other.h"
#include<stdio.h>

using namespace std;

void Clearfile()
{
    StaticLinkList S;
    int i,j;
    char q;
    char str[10]={"0"};
    int c=0;
    system("cls");
    Header_administrator();
    printf("\n");
    Space(5);
    printf("ȷ������ϵͳ�����ļ���������1ȷ�����������˳���\n");
    cin>>q;
    if(q=='1')
    {
        system("cls");
        Header_administrator();
        printf("\n");
        Space(10);
        printf("����ϵͳ�����ļ���...\n");
        printf("\n");
        Line();
        c=Read(S);
        for(i=0;i<MAXSIZE;i++)//�������ʼ��
        {
            for(j=0;j<6;j++)
                S[i].data.plate[j]='0';
            S[i].data.plate[6]='\0';
            strcpy(S[i].data.name,str);
            for(j=0;j<18;j++)
                S[i].data.ID[j]='0';
            S[i].data.ID[18]='\0';
            strcpy(S[i].data.car,str);
            S[i].cur=i+1;
        }
        c=0;
        Store(S,c);//���浽ϵͳ�ļ�
        system("cls");
        Header_administrator();
        printf("\n");
        Space(10);
        printf("ϵͳ�ļ��������\n");
        printf("\n");
        Line();
    }
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("�������ع���Ա����ϵͳ��Ϣ����\n");
    printf("\n");
    Line();
    system("pause");
}
