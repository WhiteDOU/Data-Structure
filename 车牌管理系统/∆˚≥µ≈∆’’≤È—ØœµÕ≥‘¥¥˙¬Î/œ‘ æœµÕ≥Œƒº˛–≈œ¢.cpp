#include<iostream>
#include<cstdlib>
#include<cstdio>
#include"StaticLinkList.h"
#include"Other.h"

using namespace std;

void Show()
{
    StaticLinkList S;
    int i,j,k;
    int c=0;
    c=Read(S);
    system("cls");
    Header_administrator();//��ͷ�ͽ���
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"1   ������ʾ����������Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"2   ȫ����ʾ����������Ϣ";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"0   ���ع���Ա����ϵͳ��Ϣ����";
    Space(12);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    Line();
    cout<<endl;
    cout<<"��ѡ��";
    cin>>i;
    while(i!=0&&i!=1&&i!=2)
    {
        printf("�����ѡ�񲢲���ȷ\n");
        printf("��ѡ��1��2����0\n");
        cout<<endl<<"��ѡ��";
        cin>>i;
    }
    switch(i)
    {
        case 1:
            for(k=1;k<=c;k++)
            {
                system("cls");
                Header_administrator();
                cout<<endl<<"��ǰ��ʾ��"<<k<<"����Ϣ����"<<c<<"����Ϣ."<<endl<<endl;
                printf("���ƺţ�\t\t��");
                for(j=0;j<6;j++)
                    printf("%c",S[k].data.plate[j]);
                printf("\n����������\t\t");
                cout<<S[k].data.name<<endl;
                printf("�������֤�ţ�\t\t");
                printf("%s",S[k].data.ID);
                printf("\n����Ʒ�Ƽ��ͺţ�\t");
                cout<<S[k].data.car<<endl;
                printf("\n");
                Line();
                system("pause");
            }
            break;
        case 2:
            system("cls");
            Header_administrator();
            for(k=1;k<=c;k++)
            {
                printf("\n");
                printf("���ƺţ�\t\t��");
                for(j=0;j<6;j++)
                    printf("%c",S[k].data.plate[j]);
                printf("\n����������\t\t");
                cout<<S[k].data.name<<endl;
                printf("�������֤�ţ�\t\t");
                printf("%s",S[k].data.ID);
                printf("\n����Ʒ�Ƽ��ͺţ�\t");
                cout<<S[k].data.car<<endl;
            }
            Line();
            cout<<"��"<<c<<"����Ϣ��"<<endl;
            system("pause");
            break;
        case 0:
            break;
    }
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("�������ع���Ա����ϵͳ��Ϣ���棡\n");
    printf("\n");
    Line();
    system("pause");
}
