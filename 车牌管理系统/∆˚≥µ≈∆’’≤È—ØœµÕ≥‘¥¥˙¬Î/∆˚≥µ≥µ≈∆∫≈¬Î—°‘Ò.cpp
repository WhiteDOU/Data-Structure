#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<conio.h>
#include"StaticLinkList.h"
#include"Choice.h"
#include<stdio.h>

using namespace std;

void Choose(StaticLinkList S,int c)
{
    ElemType Test;
    int t=1;
    int i,j,k,z;
    char ch,th;
    while(t==1)
    {
        system("cls");
        Header_choose();
        printf("ѡ���������ڳ��У�\n");
        cout<<'\t'<<"1   ������"<<'\t'<<"2   ������"<<'\t'<<"3   ��ɽ��"<<endl;
        cout<<'\t'<<"4   ��˳��"<<'\t'<<"5   ��Ϫ��"<<'\t'<<"6   ������"<<endl;
        cout<<'\t'<<"7   ������"<<'\t'<<"8   Ӫ����"<<'\t'<<"9   ������"<<endl;
        cout<<'\t'<<"10  ������"<<'\t'<<"11  �̽���"<<'\t'<<"12  ������"<<endl;
        cout<<'\t'<<"13  ������"<<'\t'<<"14  ��«����"<<endl;
        cout<<endl<<'\t'<<"0   �������˵�"<<endl;
        printf("\t0   �������˵�\n");
        printf("\n");
        Line();
        printf("��ѡ��\n");
        scanf("%d",&k);
        while(k<0||k>14)
        {
            printf("�����ѡ����ȷ��\n");
            printf("��ѡ��1~14����0\n");
            printf("��ѡ��\n");
            scanf("%d",&k);
        }
        switch(k)
        {
            case 1:th='A';break;
            case 2:th='B';break;
            case 3:th='C';break;
            case 4:th='D';break;
            case 5:th='E';break;
            case 6:th='F';break;
            case 7:th='G';break;
            case 8:th='H';break;
            case 9:th='J';break;
            case 10:th='K';break;
            case 11:th='L';break;
            case 12:th='M';break;
            case 13:th='N';break;
            case 14:th='P';break;
            case 0:t=0;break;
        }
        if(k!=0)
        {
            j=0;
            while(j==0)//����Ҫѡ��ĳ��ƺ���
            {
                system("cls");
                Header_choose();
                for(i=0;i<6;i++)
                    Test.plate[i]='O';
                Test.plate[6]='\0';
                cout<<"����������ѡ����������ƺ��룺"<<endl;
                printf("��%c",th);
                Test.plate[0]=th;
                i=1;
                while((ch=getch())!='\r')
                {
                    if(ch=='\b')
                    {
                        if(i>1)
                        {
                            i--;
                            printf("\b \b");// �˸��ʵ��
                            Test.plate[i+1]='O';
                        }
                        else
                            putchar(7);
                    }
                    else
                    {
                        if(i!=6)
                        {
                            if((ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
                            {
                                Test.plate[i++]=ch;
                                cout<<ch;
                            }
                            else putchar(7);
                        }
                    }
                }
                Test.plate[6]='\0';
                j=1;
                z=0;
                for(i=0;i<6;i++)
                {
                    ch=Test.plate[i];
                    if(i==0)
                    {
                        if(ch>='A'&&ch<='P'&&ch!='I'&&ch!='O') j=j;
                        else j=0;
                    }
                    if(i>0&&i<5)
                    {
                        if(ch>='A'&&ch<='Z'&&ch!='I'&&ch!='O')
                        {
                            j=j;
                            z++;
                        }
                        else if(ch>='0'&&ch<='9') j=j;
                        else j=0;
                    }
                    if(i==5)
                    {
                        if(ch>='0'&&ch<='9') j=j;
                        else j=0;
                    }
                    if(z>2) j=0;
                }
                if(j==0)
                {
                    printf("����ĳ��ƺŲ����Ϲ涨��\n");
                    printf("ע�⣺����ʡ������ʽΪ\"��XXXXXX\"\n");
                    printf("���е�һλΪA,B,C,D,E,F,G,H,J,K,L,M,N,P,����14������\n");
                    printf("�ڶ�λ������Ϊ��I��O���24����дӢ����ĸ�Լ�0~9������ɣ�\n");
                    printf("��Ӣ����ĸ���ܳ���2��\n");
                    printf("���һλΪֻ����0~9������\n");
                    printf("���������복�ƺ�!\n");
                    system("pause");
                }
            }
            system("cls");
            Header_choose();
            printf("\n");
            Space(20);
            printf("���ƺ��������...\n");
            printf("\n");
            Line();
            if(!Search_Block(S,c,Test,th))
            {
                system("cls");
                Header_choose();
                printf("\n");
                Space(5);
                cout<<"��ϲ�������ƺ��� ��"<<Test.plate<<"����ʹ�ã�"<<endl;
                printf("\n");
                Line();
            }
            else
            {
                system("cls");
                Header_choose();
                printf("\n");
                Space(5);
                cout<<"�ǳ���Ǹ�����ƺ��� ��"<<Test.plate<<"�ѱ�����ʹ�ã�"<<endl;
                printf("\n");
                Line();
            }
        }
        if(k!=0)
        {
            printf("ѡ��1.\t����ѡ��\t\t0.\t����������\n");
            printf("��ѡ��\n");
            scanf("%d",&t);
            while(t!=0&&t!=1)
            {
                printf("�����ѡ����ȷ��\n");
                printf("ѡ��1.\t����ѡ��\t\t0.\t����������\n");
                printf("��ѡ��\n");
                scanf("%d",&t);
            }
        }
    }
    system("cls");
    Header_choose();
    printf("\n");
    Space(20);
    printf("�����������˵���\n");
    printf("\n");
    Line();
    system("pause");
}
