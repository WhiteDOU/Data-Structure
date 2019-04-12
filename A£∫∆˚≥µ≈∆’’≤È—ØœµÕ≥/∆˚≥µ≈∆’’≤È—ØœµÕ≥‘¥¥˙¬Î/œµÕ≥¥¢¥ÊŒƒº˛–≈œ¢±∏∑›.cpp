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
    printf("对系统储存文件信息进行备份！\n");
    printf("请输入文件路径：\n");
    cin>>file;
    ofstream fout;
    fout.open(file,ios::out);
    while(fout.fail())
    {
        printf("文件存储地址不正确！\n");
        printf("请输入正确的文件路径：\n");
        cin>>file;
        fout.open(file,ios::out);
    }
    system("cls");
    Header_administrator();
    printf("\n");
    Space(20);
    printf("系统储存文件信息备份中...\n");
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
    printf("系统储存文件信息成功备份！\n");
    printf("\n");
    Line();
    system("pause");
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("即将返回管理员更新系统信息界面\n");
    printf("\n");
    Line();
    system("pause");
}
