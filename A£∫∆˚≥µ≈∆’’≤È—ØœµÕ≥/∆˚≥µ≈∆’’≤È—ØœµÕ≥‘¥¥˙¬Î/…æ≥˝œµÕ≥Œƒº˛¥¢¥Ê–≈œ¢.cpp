#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include"StaticLinkList.h"
#include"Other.h"

using namespace std;

void Delete()
{
    StaticLinkList S,Snew;
    ElemType del,Test;
    char str[10]={"0"};
    int c=0;
    int i=1;
    int j,k,test;
    while(i==1)
    {
        k=0;
        c=Read(S);
        system("cls");
        Header_administrator();
        printf("这里是要删除车牌的信息\n");
        del=Input_plate(del,9);//接收要删除信息的车牌号码
        system("cls");
        Header_administrator();
        printf("\n");
        Space(10);
        cout<<"车牌辽"<<del.plate<<"信息查找中..."<<endl;
        printf("\n");
        Line();
        Test=del;
        test=Search_Binary_Admin(S,c,Test);
        strcpy(Test.plate,S[test].data.plate);
        strcpy(Test.name,S[test].data.name);
        strcpy(Test.ID,S[test].data.ID);
        strcpy(Test.car,S[test].data.car);
        system("cls");
        Header_administrator();
        printf("\n查找结果是\n");
        if(test!=0)
        {
            system("cls");
            Header_administrator();
            printf("车牌号：\t\t辽");
            for(j=0;j<6;j++)
                printf("%c",Test.plate[j]);
            printf("\n车主姓名：\t\t");
            printf("%s",Test.name);
            printf("\n车主身份证号：\t\t");
            printf("%s",Test.ID);
            printf("\n车辆品牌及型号：\t");
            printf("%s",Test.car);
            printf("\n");
            Line();
            printf("\n请选择：1.\t\t修改该信息   0.\t\t返回\n");
            printf("\n请选择\n");
            scanf("%d",&k);
            while(k!=0&&k!=1)
            {
                printf("\n输入的不正确哟~\n");
                 printf("\n请选择：1.\t\t修改该信息   0.\t\t返回\n");
                printf("请选择\n");
                scanf("%d",&k);
            }
            if(k==1)
            {
                system("cls");
                Header_administrator();
                printf("\n");
                Space(10);
                printf("信息删除中\n");
                printf("\n");
                Line();
                if(test==c)
                    S[test-1].cur=0;
                else
                    S[test-1].cur=test+1;
                c--;
                system("cls");
                Header_administrator();
                printf("\n");
                Space(10);
                printf("\n系统文件储存中\n");
                printf("\n");
                Line();
                for(i=0;i<MAXSIZE;i++)//初始化链表
                {
                    for(j=0;j<6;j++)
                        Snew[i].data.plate[j]='0';
                    Snew[i].data.plate[6]='\0';
                    strcpy(Snew[i].data.name,str);
                    for(j=0;j<18;j++)
                        Snew[i].data.ID[j]='0';
                    Snew[i].data.ID[18]='\0';
                    strcpy(Snew[i].data.car,str);
                    Snew[i].cur=i+1;
                }
                k=S[0].cur;
                i=1;
                Snew[0].cur=S[0].cur;
                while(k!=0)//将删除后的链表复制
                {
                    for(j=0;j<7;j++)
                        Snew[i].data.plate[j]=S[k].data.plate[j];
                    strcpy(Snew[i].data.name,S[k].data.name);
                    for(j=0;j<19;j++)
                        Snew[i].data.ID[j]=S[k].data.ID[j];
                    strcpy(Snew[i].data.car,S[k].data.car);
                    Snew[i].cur=i+1;
                    k=S[k].cur;
                    i++;
                }
                Snew[c].cur=0;
                Store(Snew,c);//储存删除后新的链表
                system("cls");
                Header_administrator();
                printf("\n");
                Space(5);
                printf("\n信息删除成功\n");
            }
            else
            {
                printf("\n");
                Space(5);
                printf("\n未删除该信息\n");
            }
        }
        else
        {
            Space(5);
            printf("未找到这个车牌的信息\n");

        }
        printf("\n");
        Line();
        printf("\n");
        system("pause");
        printf("选择:1.\t\t继续删除\t 0.\t\t返回上一界面\n");
        printf("请选择\n");
        scanf("%d",&i);
        while(i!=0&&i!=1)
        {
            printf("输入的数据不正确啊~！\n");
            printf("选择:1.\t\t继续删除\t 0.\t\t返回上一界面\n");
            printf("请选择\n");
            scanf("%d",&i);
        }
    }
    system("cls");
    Header_administrator();
    printf("\n");
    Space(10);
    printf("即将返回管理员管理界面\n");
    printf("\n");
    Line();
    system("pause");
}
