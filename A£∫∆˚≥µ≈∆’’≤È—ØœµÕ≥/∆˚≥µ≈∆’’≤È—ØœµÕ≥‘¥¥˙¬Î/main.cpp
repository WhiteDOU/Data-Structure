#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include"StaticLinkList.h"
#include"Main.h"

using namespace std;

int main()
{
    StaticLinkList SLL;
    int s=0;
    int i=100;
    while(i!=0)
    {
        system("cls");
        Header_main();//�������ͷ
        Main_interfasce();//����������
        s=Read(SLL);//��ȡϵͳ����
        printf("��ѡ��\n");
        scanf("%d,",&i);
        while(i!=0&&i!=1&&i!=2&&i!=9)
        {
            printf("����ĺ�����ȷӴ��\n");
            printf("������ѡ�� 1��2��0��\n");
            printf("��ѡ��\n");
            scanf("%d",&i);
        }
        switch(i)
        {
            case 1:Search(SLL,s);break;
            case 2:Choose(SLL,s);break;
            case 9:
                if(PassLink())
                Administrator();
                break;
            case 0:
                system("cls");
                Header_main();
                cout<<endl;
                Space(10);
                cout<<"�˳�ϵͳ��"<<endl;
                cout<<endl<<endl;
                Line();
                break;
        }
    }
    return 0;
}
