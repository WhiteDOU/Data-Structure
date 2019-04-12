#include<iostream>
#include<cstdlib>
#include<cstdio>
#include"StaticLinkList.h"
#include"Query.h"

using namespace std;

void Search(StaticLinkList S,int c)
{
    ElemType Test;
    int i=1;
    int j;
    while(i==1)
    {
        system("cls");
        Header_query();
        Test=Input_plate(Test,1);//接收要查找汽车车牌号码
        system("cls");
        Header_query();
        printf("\n");
        Space(10);
        cout<<"车牌辽"<<Test.plate<<"信息查找中..."<<endl;
        printf("\n");
        Line();
        Test=Search_Binary(S,c,Test);
        system("cls");
        Header_query();
        printf("查找结果：\n");
        if(Test.plate[0]!=0)
        {
            printf("车牌号：\t\t辽");
            for(j=0;j<6;j++)
                printf("%c",Test.plate[j]);
            printf("\n车主姓名：\t\t");
            printf("%s",Test.name);
            printf("\n车主身份证号：\t\t");
            printf("%s",Test.ID);
            printf("\n车辆品牌及型号：\t");
            printf("%s",Test.car);
        }
        else
        {
            Space(5);
            printf("未找到该车牌信息！\n");
        }
        printf("\n");
        Line();
        printf("\n");
        system("pause");
        printf("选择：1.\t继续查询\t0.\t返回主界面\n");
        printf("请选择：\n");
        scanf("%d",&i);
        while(i!=0&&i!=1)
        {
            printf("输入的选择不正确！\n");
            printf("选择：1.\t继续查询\t0.\t返回主界面\n");
            printf("请选择：\n");
            scanf("%d",&i);
        }
    }
    system("cls");
    Header_query();
    printf("\n");
    Space(20);
    printf("即将返回主菜单！\n");
    printf("\n");
    Line();
    system("pause");
}
