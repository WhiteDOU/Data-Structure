#include<iostream>
#include<fstream>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Other.h"
#include<stdio.h>

using namespace std;

void Backups()
{
    StaticLinkList S;
    int c=0;
    int i;
    char file[100];
    system("cls");
    Header_administrator();
    printf("\n");
    printf("��ϵͳ�����ļ���Ϣ���б��ݣ�\n");
    printf("�������ļ�·����\n");
    cin>>file;
    ofstream fout;
    fout.open(file,ios::out);
    while(fout.fail())
    {
        printf("�ļ��洢��ַ����ȷ��\n");
        printf("��������ȷ���ļ�·����\n");
        cin>>file;
        fout.open(file,ios::out);
    }
    system("cls");
    Header_administrator();
    printf("\n");
    Space(20);
    printf("ϵͳ�����ļ���Ϣ������...\n");
    printf("\n");
    Line();
    c=Read(S);
    fout<<c<<" ";
    for(i=0;i<MAXSIZE;i++)
    {
        fout<<S[i].data.plate<<" "<<S[i].data.name<<" "<<S[i].data.ID<<" "<<S[i].data.car<<" "<<S[i].cur<<" ";
    }
    fout.close();
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("ϵͳ�����ļ���Ϣ�ɹ����ݣ�\n");
    printf("\n");
    Line();
    system("pause");
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("�������ع���Ա����ϵͳ��Ϣ����\n");
    printf("\n");
    Line();
    system("pause");
}
