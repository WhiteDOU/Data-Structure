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
        Header_main();//主界面表头
        Main_interfasce();//主界面内容
        s=Read(SLL);//读取系统数据
        printf("请选择：\n");
        scanf("%d,",&i);
        while(i!=0&&i!=1&&i!=2&&i!=9)
        {
            printf("输入的好像不正确哟！\n");
            printf("请输入选择 1、2、0；\n");
            printf("请选择：\n");
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
                cout<<"退出系统！"<<endl;
                cout<<endl<<endl;
                Line();
                break;
        }
    }
    return 0;
}
