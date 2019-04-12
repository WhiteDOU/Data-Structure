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
    Header_administrator();//表头和界面
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"1   单个显示汽车牌照信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"2   全部显示汽车牌照信息";
    Space(18);
    cout<<"|"<<endl;
    cout<<"|";
    Space(60);
    cout<<"|"<<endl;
    cout<<"|";
    Space(18);
    cout<<"0   返回管理员更新系统信息界面";
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
    cout<<"请选择：";
    cin>>i;
    while(i!=0&&i!=1&&i!=2)
    {
        printf("输入的选择并不正确\n");
        printf("请选择1、2或者0\n");
        cout<<endl<<"请选择：";
        cin>>i;
    }
    switch(i)
    {
        case 1:
            for(k=1;k<=c;k++)
            {
                system("cls");
                Header_administrator();
                cout<<endl<<"当前显示第"<<k<<"个信息，共"<<c<<"个信息."<<endl<<endl;
                printf("车牌号：\t\t辽");
                for(j=0;j<6;j++)
                    printf("%c",S[k].data.plate[j]);
                printf("\n车主姓名：\t\t");
                cout<<S[k].data.name<<endl;
                printf("车主身份证号：\t\t");
                printf("%s",S[k].data.ID);
                printf("\n车辆品牌及型号：\t");
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
                printf("车牌号：\t\t辽");
                for(j=0;j<6;j++)
                    printf("%c",S[k].data.plate[j]);
                printf("\n车主姓名：\t\t");
                cout<<S[k].data.name<<endl;
                printf("车主身份证号：\t\t");
                printf("%s",S[k].data.ID);
                printf("\n车辆品牌及型号：\t");
                cout<<S[k].data.car<<endl;
            }
            Line();
            cout<<"共"<<c<<"个信息！"<<endl;
            system("pause");
            break;
        case 0:
            break;
    }
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("即将返回管理员更新系统信息界面！\n");
    printf("\n");
    Line();
    system("pause");
}
