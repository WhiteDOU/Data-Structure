#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Other.h"
#include<stdio.h>
using namespace std;

ElemType Input_plate(ElemType elem,int cls)
{
    int i;
    int j=0;
    int z=0;
    char ch;
    while(j==0)
    {
        for(i=0;i<6;i++)
        {
            elem.plate[i]='O';//��ʼ��
        }
        elem.plate[6]='\0';
        i=0;
        if(z==100)
        {
            system("cls");
            if(cls==1)
                Header_query();
            else if(cls==2)
                Header_choose();
            else if(cls==9)
                Header_administrator();
        }
        printf("�����복�ƺţ���");
        while((ch=getch())!='\r')//��֤���ƺ���ĸ�ʽ
        {
            if(ch=='\b')
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");// �˸��ʵ��
                    elem.plate[i+1]='O';
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
                            elem.plate[i++]=ch;
                            cout<<ch;
                        }
                        else putchar(7);
                    }
            }
        }
        elem.plate[6]='\0';
        j=1;
        z=0;
        for(i=0;i<6;i++)//��������ĳ��ƺ����Ƿ����ʵ�����
        {
            ch=elem.plate[i];
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
            printf("ע�⣺����ʡ������ʽΪ\"��XXXXXX\\n");
            printf("���е�һλΪA,B,C,D,E,F,G,H,J,K,L,M,N,P,����14������\n");
            printf("�ڶ�λ������Ϊ��I��O���24����дӢ����ĸ�Լ�0~9������ɣ�\n");
            printf("��Ӣ����ĸ���ܳ���2��\n");
            printf("���һλΪֻ����0~9������\n");
            printf("���������복�ƺ�!\n");
            system("pause");
            z=100;
        }
    }
    return elem;
}

ElemType Input_name(ElemType elem)
{
    printf("\n��������:\n");
    cin>>elem.name;
    return elem;
}

ElemType Input_ID(ElemType elem)
{
    int i;
    char ch;
    for(i=0;i<18;i++)
    {
        elem.ID[i]='a';
    }
    i=0;
    printf("\n�������֤�ţ�\n");
    while((ch=getch())!='\r')//��֤���֤������18λ�����֣����һλ������X��
    {
        if(ch=='\b')
        {
            if(i>0)
            {
                i--;
                printf("\b \b");// �˸��ʵ��
                elem.ID[i+1]='\0';
            }
            else
                putchar(7);
        }
        else
        {
            if(i==17)
            {
                {
                    if((ch>='0'&&ch<='9')||ch=='X'||ch=='x')
                    {
                        if(ch=='X'||ch=='x')
                        {
                            elem.ID[i++]='X';
                            cout<<'X';
                        }
                        else
                        {
                            elem.ID[i++]=ch;
                            cout<<ch;
                        }
                    }
                    else putchar(7);
                }
            }
            if(i<17)
            {
                if(ch>='0'&&ch<='9')
                {
                    elem.ID[i++]=ch;
                    cout<<ch;
                }
                else putchar(7);
            }
        }
    }
    for(i=0;i<18;i++)
    {
        if(elem.ID[i]=='a')
        {
            printf("����Ĳ���\n");
            break;
        }
    }
    elem.ID[18]='\0';
    return elem;
}

ElemType Input_car(ElemType elem)
{
    printf("\n����Ʒ�Ƽ��ͺţ�\n");
    cin>>elem.car;
    return elem;
}
