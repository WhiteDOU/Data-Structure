#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<fstream>
#include"StaticLinkList.h"
#include"Other.h"

#define M 15       //��������λ��Ϊ(M-1)

using namespace std;

bool PassLink()
{
    char password[M];
    int n=0;
    int x=0;
    ifstream fin;
    fin.open("password.txt",ios::in);
    fin>>password;
    fin.close();
    while(n<=3&&x==0)
    {
        n++;
        if(n<=3)
        {
            char ch,password0[M];
            int i=0;
            system("cls");
            Header_administrator();
            printf("\n\n");
            Space(20);
            printf("����������:");
            while((ch=getch())!='\r' && i<=M)
            {
                if(ch=='\b')
                {
                    if(i>0)
                    {
                        i--;
                        printf("\b \b");// ����֧���˸��ʵ��
                    }
                    else
                        putchar(7);
                }
                else
                {
                    password0[i++]=ch;
                    printf("*");
                }
            }
            password0[i]='\0';
            if(!strcmp(password0,password))
            {
                system("cls");
                Header_administrator();
                printf("\n\n");
                Space(5);
                printf("������ȷ         ���������\n");
                system("pause");
                x=1;
            }
            else
            {
                printf("\n");
                Space(15);
                printf("�������        ������%d�λ���\n",3-n);
                system("pause");
            }

        }
        else
        {
            system("cls");
            Header_administrator();
            printf("\n\n");
            Space(5);
            printf("���������        �޷��������Աϵͳ!\n");
            system("pause");
            x=0;
        }
    }
    return x;
}
