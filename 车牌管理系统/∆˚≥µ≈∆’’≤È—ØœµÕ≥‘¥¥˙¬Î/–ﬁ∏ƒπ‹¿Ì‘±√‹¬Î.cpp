#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include"StaticLinkList.h"
#include"Other.h"
#define M 15

using namespace std;

void Password_Change()
{
    char ch1,ch2,password[M],password1[M],password2[M];
    int i=0,j=0,x;
    ifstream fin;
    fin.open("password.txt",ios::in);
    fin>>password;
    fin.close();
do{
    i=0,j=0;
    system("cls");
    Header_administrator();
    printf("\n\n");
    Space(20);
    printf("������������");
    while((ch1=getch())!='\r' && i<=M)
            {
                if(ch1=='\b')
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
                    password1[i++]=ch1;
                    printf("*");
                }
            }
    password1[i]='\0';
    printf("\n");
    Space(20);
    printf("��ȷ��������");
    while((ch2=getch())!='\r' && j<=M)
            {
                if(ch2=='\b')
                {
                    if(j>0)
                    {
                        j--;
                        printf("\b \b");// ����֧���˸��ʵ��
                    }
                    else
                        putchar(7);
                }
                else
                {
                    password2[j++]=ch2;
                    printf("*");
                }
            }
            password2[j]='\0';
            if(strcmp(password1,password2)==0)
            {
                x=0;
                printf("\n");
                Space(20);
                printf("�����޸ĳɹ���\n");
                  system("pause");
            }
            else
                {
                    x=1;
                    printf("\n");
                    Space(15);
                    printf("�����������벻ͬ����������һ��\n");
                    system("pause");
                }
  }while(x);
  for(i=0;i<=M;i++)
  {
      password[i]=password1[i];
  }
  ofstream fout;
  fout.open("password.txt",ios::out);
  fout<<password;
  fout.close();
}
