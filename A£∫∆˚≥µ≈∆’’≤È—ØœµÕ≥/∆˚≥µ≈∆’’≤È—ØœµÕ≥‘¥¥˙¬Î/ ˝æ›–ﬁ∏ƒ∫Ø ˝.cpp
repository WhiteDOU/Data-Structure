#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstdlib>
#include"StaticLinkList.h"
#include"Input.h"
#include"Other.h"

using namespace std;

ElemType Revise(ElemType elem)
{
    int i=0,j;
    printf("\n\n请选择要修改的信息\n");
    printf("1.车牌号码\n");
    printf("2.车主姓名\n");
    printf("3.车主身份证号\n");
    printf("4.车辆品牌以及型号\n");
    printf("0.完全正确无需修改n");
    printf("请选择\n");
    scanf("%d",&j);
    while(j<0||j>5)
    {
        printf("输入的选择不正确哟~\n\n请选择1、2、3、4、0输入\n请选择：\n");
        scanf("%d",&j);
    }
    system("cls");
    Header_administrator();
    if(j!=0)
        printf("请输入新的信息\n");
    switch(j)
    {
        case 1:elem=Input_plate(elem,9);break;
        case 2:elem=Input_name(elem);break;
        case 3:elem=Input_ID(elem);break;
        case 4:elem=Input_car(elem);break;
        case 0:i=1;printf("没有修改信息\n");break;
    }
    if(i!=1)
    {
        printf("信息修改成功\n");
        i=0;
    }
    system("pause");
    return elem;
}
